using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window) {
      if(bounce <= 0 || bounce >= 1 || h <= 0 || window >= h)
        return -1;
      int count = 1;
      while(true) {
        h *= bounce;
        if(h > window)
          count += 2;
        else
          return count;
      }
    }
};



