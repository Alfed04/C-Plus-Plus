
int count=0;
class Alpha{
    public:
    Alpha(){
        count++;
        cout<<"\nNo. of objects created : "<<count;
    }
    ~Alpha(){
        cout<<"\nNo. of objects destroyed : "<<count;
        count--; }
};

int main ()
{
    Alpha A1,A2,A3,A4;
    {
        cout<<"\nEnter Block 1";
        Alpha A5;
    }
    {
        cout<<"\nEnter Block 2";
        Alpha A6;
    }
    return 0;
}
