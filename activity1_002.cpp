#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a + b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else{
        return "gagal";
    }    
}

string status2(double r, double n){
    if (r >=60 && n >=70){
        return "lulus";
    }else{
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >= 70){
        return "lulus";
    }else{
        return "gagal";
    }
}

int main(){
    double nilaiMath, nilaiBindo;
    cout << "masukkan nilai matematika : ";
    cin >> nilaiMath;
    cout << "masukkan nilai bahasa indonesia : ";
    cin >> nilaiBindo;

    cout << "nilai rata-ratanya : " << rerata(nilaiMath, nilaiBindo);
    cout << "\nstatus kelulusannya : " << status(rerata(nilaiMath, nilaiBindo));
    cout << "\nstatus kelulusannya : " << status2(nilaiMath, nilaiBindo), nilaiMath;
    cout << "\nstatus kelulusannya : " << status3(nilaiMath, nilaiBindo), nilaiMath;


}