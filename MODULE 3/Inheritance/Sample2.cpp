#include<iostream>
using namespace std;

class Student{
    private:

        int RollNumber;
    public:
        void setRollNumber(int x){
            RollNumber = x;
        }
        void getRollNumber(){
            cout<<"The roll number is:  "<<RollNumber<<endl;
        }
};

class Exam : public Student{
    protected:

        int physics;
        int chemistry;
        int maths;
    public:
        void setMarks(int p, int c, int m){
            physics = p;
            chemistry = c;
            maths = m;
        }
        
        void getMarks(){
            cout <<"The marks obtained in physics are: "<<physics<<endl;
            cout <<"The marks obtained in chemistry are: "<<chemistry<<endl;
            cout <<"The marks obtained in maths are: "<<maths<<endl;
        }
    
};

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        getRollNumber();
        getMarks();
        cout << "Your result is " << (maths + physics + chemistry) / 3 << "%" << endl;
    }
};


int main()
{
    Result harry;
    harry.setRollNumber(420);
    harry.setMarks(94, 90,99);
    harry.display_results();
    return 0;
}
