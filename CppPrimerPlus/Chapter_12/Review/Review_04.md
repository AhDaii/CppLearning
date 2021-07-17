1. personality = s                                  =>  strcpy(personality, s)
2. nifty:                                           =>  nifty::
3. os << n                                          =>  os << n.personality << ' ' << n.talents; return os;
4. char personality[]                               =>  char *personality
5. ostream & operator<<(ostream &os, nifty &n);     =>  friend ostream & operator<<(ostream &os, nifty &n);