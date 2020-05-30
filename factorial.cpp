# include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Introducir un número entero" << endl;
    
    cin >> n;
    
    int factorial = 1;
    int i;
    
    if(n < 0){
        factorial = 0;
        }
    else{
        if(n == 0){
            factorial = 1;
            }
        else{
            for(i=1;i<=n;i++){
                factorial = i * factorial;
            }
        }
    }
    
    cout << "El factorial de " << n << " es = " << factorial << endl;
        
    return 0;
}
