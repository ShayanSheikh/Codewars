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

/* A child plays with a ball on the nth floor of a big building. The height of this floor is known. 
He lets out the ball. The ball bounces for example to two-thirds of its height. His mother looks out 
of a window that is 1.5 meters from the ground. How many times will the mother see the ball either 
falling or bouncing in front of the window? */

