#include <iostream>

#define lock_amt 1
#define basin_amt 1

//cm

using namespace std;

/*
namespace fw
{
    struct information
    {
        long lock_a;
        long lock_b;
        long lock_h;
        long lock_H[lock_amt]={};
        long lock_wterh[lock_amt]={};
        long lock_cost[lock_amt]={};
        long basin_a;
        long basin_b;
        long basin_h;
        long basin_H[basin_amt]={};
        long basin_wterh[basin_amt]={};
        long basin_cost[basin_amt]={};

    }gcy;

    void init()
    {
        for(int i1=0;i1<lock_amt;i1++)
        {
            gcy.lock_H[i1]=5000*i1;
            gcy.lock_h=20000;
            gcy.lock_wterh[i1]=10000;
        }
    }

    long my_min(long *l,int amt)
    {
        long rslt=l[0];
        for(int i=1;i<amt;i++)
        {
            if(l[i]<rslt)
            {
                rslt=l[i];
            }
        }
        return rslt;
    }

    long lock_abwterh(int index)
    {
        return gcy.lock_H[index]+gcy.lock_wterh[index];
    }

    long basin_abwterh(int index)
    {
        return gcy.basin_H[index]+gcy.basin_wterh[index];
    }

    long NB_sub(long l1,long l2)
    {
        if(l1<l2)
        {
            return 0;
        }
        else
        {
            return l1-l2;
        }
    }

    long absolute(long l1)
    {
        if(l1<0)
        {
            return -l1;
        }
        return l1;
    }

    long lock_water_transfering(int index)
    {
        if(index<lock_amt-2&&index!=0)
        {
            long trsf_wterh=(lock_abwterh(index+1)-lock_abwterh(index))/2;
            long l[3]={gcy.lock_h-gcy.lock_wterh[index],gcy.lock_wterh[index+1],trsf_wterh};
            long real_trsf=my_min(l,3);
            gcy.lock_wterh[index]+=real_trsf;
            gcy.lock_wterh[index+1]-=real_trsf;
            return real_trsf;
        }
        else if(index==lock_amt-2)
        {
            long trsf_wtreh=lock_abwterh(lock_amt-1)-lock_abwterh(lock_amt-2);
            gcy.lock_wterh[lock_amt-2]+=trsf_wtreh;
            return trsf_wtreh;
        }
        else if(index==0)
        {
            long trsf_wterh=lock_abwterh(1)-lock_abwterh(0);
            gcy.lock_wterh[1]-=trsf_wterh;
            return trsf_wterh;
        }
        return -1;
    }

    long single_ship()
    {
        for(int i1=0;i1<lock_amt-2;i1++)
        {
            lock_water_transfering(i1);
        }
        return lock_water_transfering(lock_amt-2);
    }

    void single_lock2basin(int lock_index,int basin_index)
    {
        long Vwter=gcy.lock_wterh[lock_index]*gcy.lock_a*gcy.lock_b+gcy.basin_wterh[basin_index]*gcy.basin_a*gcy.basin_b;
        if(!(gcy.lock_H[lock_index]>gcy.basin_H[basin_index]))
        {

        }
    }

    void lock2basin(int lock_index)
    {
        for(int i1=basin_amt-1;i1>-1;i1++)
        {
            //if(lock_abwterh(lock_index))
        }
    }


    double single_saving_rate(long amt,long hght,long area)
    {

    }

    int main(/*int argc, char *argv[])
    {
        init();

        long usedwter=0;
        for(int times=0;times<10000;times++)
        {
            usedwter+=single_ship();
            for(int i1=0;i1<lock_amt;i1++)
            {
                cout<<gcy.lock_wterh[i1]<<" ";
            }
            cout<<"       "<<usedwter<<endl;
        }

        return 0;
    }
}
==============================================================================================================================
*/
class container
{
public:
    long long S,h,H,wh,cost;
    container(long long _H,long long _wh);
};

container::container(long long _H,long long _wh)
{
    S=100000000;
    h=10000;
    cost=0;
    H=_H;
    wh=_wh;
}

bool is_higher(container *c1,container *c2)
{
    if(!(c1->H+c1->wh<c2->H+c2->wh))
    {
        return true;
    }
    return false;
}

long long NB_sub(long long l1,long long l2)
{
    if(!(l1>l2))
    {
        return 0;
    }
    return l1-l2;
}

long long absolute(long long l1)
{
    if(l1>0)
    {
        return l1;
    }
    return -l1;
}

long long transfer(container *c1,container *c2)
{
    if(is_higher(c1,c2))
    {
        while()
    }

}
/*

long S_lock=10000;

double saving_rate(long n,long S_wsb,long H_wsb)
{
    return n/(1+n+S_lock/S_wsb);
}

int main()
{
    for(int i1=10000;i1<25001;i1+=100)
    {
        for(int i2=1;i2<11;i2++)
        {
            cout<<saving_rate(i2,i1,0)<<" ";
        }
        cout<<endl;
    }
}
*/
