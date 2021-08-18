// func.cxx
module;

#include <string_view>

export module mod;

export  {
    
    template<typename T, typename U>
    concept Network_concept = requires(T c, U u) {
        c.openConnection();
        c.closeConnection();
        c.send(u);
        u = c.receive();
    };


    template<typename T>
    concept Network = Network_concept<T,std::string_view>;

    template<Network Ty, typename ...Param_Ty>
    auto make_network(Param_Ty&&... param) {
        return Ty{std::forward<Param_Ty>(param)...};
    }

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

