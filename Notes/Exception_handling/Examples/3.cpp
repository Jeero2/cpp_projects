//Illustration of use of exception handlers.

#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    //float x=-1;
    //int x=10;

    cout<<"Before try"<<endl;
    try{//suspicious code lai try block ma rakhinxa. Exception auna sakne code rakhinxa
        cout<<"Inside try"<<endl;
        if (x<0)
        {
            throw x;//yo code execute huna saath espaxi ko code haru execute hudaina.
            //thorw ra catch ko argument ko datatype milaunu parxa.
            cout<<"After throw"<<endl;
        }
    }

    catch(int x) //jun catch ma parameter match hunxa (throw sanga) teskaii codes execute hunxa.
    {
        cout<<"Exception caught, int type"<<endl;
    }

    catch (float x)
    {
        cout<<"Exception caught, float type"<<endl;
    }

    cout<<"After catch"<<endl;
    return 0;
}

