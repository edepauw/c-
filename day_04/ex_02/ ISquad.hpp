class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount( void ) const = 0;
        virtual ISpaceMarine* getUnit(int n) const = 0;
        virtual int push(ISpaceMarine* sm) = 0;  
};