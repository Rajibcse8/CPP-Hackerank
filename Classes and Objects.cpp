class Student {
  public:
    Student() {}
    
    void Input() {
        for (int i = 0; i < 5; ++i) {
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }
    }  
    int CalculateTotalScore() {
        int res = 0;
        for (int i = 0; i < v.size(); ++i) {
res += v[i];}
        return res;
    }
    
    vector<int> v;
};
