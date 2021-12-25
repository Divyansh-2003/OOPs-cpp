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
    private:

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
        int getmaths();
        int getphysics();
        int getchemistry();
    
};

int Exam :: getmaths(){
    return maths;
}
int Exam :: getchemistry(){
    return chemistry;
}

int Exam :: getphysics(){
    return physics;
}


class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        getRollNumber();
        getMarks();
        cout << "Your result is " << (getmaths() + getphysics() + getchemistry()) / 3 << "%" << endl;
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
