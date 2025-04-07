class Base {
    public:
    int x;
    protected:
    int y;
    private:
    int z;
    };
    // Public Kalıtım
    class DerivedPublic : public Base {
    // x public olarak kalır
    // y protected olarak kalır
    // z erişilemez
    };
    // Protected Kalıtım
    class DerivedProtected : protected Base {
    // x protected olur
    // y protected olarak kalır
    // z erişilemez
    };
    // Private Kalıtım
    class DerivedPrivate : private Base {
    // x private olur
    // y private olur
    // z erişilemez
    };