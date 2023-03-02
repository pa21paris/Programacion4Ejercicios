#ifndef _COORDENADAB_HH_
#define _COORDENADAB_HH_

namespace binario
{

    class Coordenada {
    private:
        int x;
        int y;
    public:
        Coordenada(int x = 0, int y = 0);
        int getX();
        int getY();

};
    
}


#endif

#ifndef _COORDENADAT_HH_
#define _COORDENADAT_HH_
namespace ternario
{
    class Coordenada {
        private:
            int x;
            int y;
            int z;

        public:
            Coordenada(int x = 0, int y = 0, int z = 0);
            int getX();
            int getY();
            int getZ();
    };  
}
#endif
