#include <iostream>
using namespace std;

// 条款08：别让异常逃离析构函数

class DBConnection {
public:
    static DBConnection create() {
        return DBConnection();
    }
    void close(bool test) {
        if (test)
            throw logic_error("DBConnection error");
    }
};

class DBConn {
private:
    DBConnection db;
    bool closed;  // 用来检测是否关闭

public:
    DBConn(DBConnection db = DBConnection::create()) : db(db), closed(false) {}
    void close() {
        db.close(false);
        closed = true;
    }
    ~DBConn() {
        if (!closed) {
            try {
                db.close(true);
            }
            catch (logic_error& l) {
                cout << l.what() << endl;
            }
        }
    }
};

int main() {
    {
        DBConn db;
        // db.close();
    }
    return 0;
}