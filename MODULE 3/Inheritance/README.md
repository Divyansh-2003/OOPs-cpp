####  Private variable and functions are never inherited.
####  Public variable and functions are inherited.




------------------

# IMPORTANT CODES:-
### Transfer private variable data from base class to derived class.

```ruby
class Base(){
    private:
        int variable;
    public:
    int ReturnVariable(){
        return variable;}
};        
```
