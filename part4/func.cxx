// func.cxx

export module mod;

// export void func();
// export void func(int);

// export {
//     void func();
//     void func(int);
// }

// namespace X {
//     export void func();
//     export void func(int);
// }

export namespace X {
    void func();
    void func(int);
}