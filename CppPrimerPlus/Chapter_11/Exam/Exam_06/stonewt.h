#ifndef _STONEWT_H_
#define _STONEWT_H_

class Stonewt {
private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    
    bool operator>  (const Stonewt &stonewt) const { return pounds > stonewt.pounds; };
    bool operator>= (const Stonewt &stonewt) const { return pounds >= stonewt.pounds; };
    bool operator<  (const Stonewt &stonewt) const { return pounds < stonewt.pounds; };
    bool operator<= (const Stonewt &stonewt) const { return pounds <= stonewt.pounds; };
    bool operator== (const Stonewt &stonewt) const { return pounds == stonewt.pounds; };
    bool operator!= (const Stonewt &stonewt) const { return pounds != stonewt.pounds; };
};

#endif