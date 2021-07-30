// func.cxx

export module mod;

export  {

    class S {
    public:
        S() = default;
        explicit S(int p):val{p}{}
        int get_val() const;
    private:
        int val{};
    };

    void func();
    void func(int);
    void func(const S&);
}

