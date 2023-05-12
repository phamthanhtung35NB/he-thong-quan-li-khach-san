#include<iostream>
#include<string>
#include <windows.h>
#include <cstdlib>
char phong[21];
void GoTo(SHORT posX, SHORT posY)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;
    Position.X = posX;
    Position.Y = posY;
	SetConsoleCursorPosition(hStdout, Position);
}
void SetColor(int backgound_color, int text_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}
void ve(){
    GoTo(0,0);
    SetColor(0,2);
        std::cout<<"---------------------------------------------------\n";
        std::cout<<"|    001:"<<phong[1]<<"    002:"<<phong[2]<<"    003:"<<phong[3]<<"    004:"<<phong[4]<<"    005:"<<phong[5]<<"    |\n";
        std::cout<<"|    006:"<<phong[6]<<"    007:"<<phong[7]<<"    008:"<<phong[8]<<"    009:"<<phong[9]<<"    010:"<<phong[10]<<"    |\n";
        std::cout<<"|    011:"<<phong[11]<<"    012:"<<phong[12]<<"    013:"<<phong[13]<<"    014:"<<phong[14]<<"    015:"<<phong[15]<<"    |\n";
        std::cout<<"|    016:"<<phong[16]<<"    017:"<<phong[17]<<"    018:"<<phong[18]<<"    019:"<<phong[19]<<"    020:"<<phong[20]<<"    |\n";
        std::cout<<"---------------------------------------------------\n";
    SetColor(0,7);
}
void nhap(){
    int n;
    std::cout<<"---------------------------------------------------\n";
    std::cout<<"Nhap so phong muon thue: ";std::cin>>n;
    char loaiPhong='k';
    std::cout<<"\nNhap loai phong: ";std::cin>>loaiPhong;
    phong[n]=loaiPhong;

}
void xem(){
    
}
void sua(){
    
}
void timKiem(){
    
}
void thongKe(){
    
}
void xoa(){
    
}
int main(){
    for (int i = 0; i < 21; i++)
    {
        phong[i]='K';
    }
    
    int luaChon;
    while (luaChon!=0)
    {
        ve();
        std::cout<<"---------------------------------\n";
        std::cout<<"1. Nhap lua chon\n";
        std::cout<<"1. Nhap\n";
        std::cout<<"2. \n";
        std::cout<<"2. \n";
        std::cout<<"4. \n";
        std::cout<<"5. \n";
        std::cout<<"0. Thoat\n";
        std::cout<<"---------------------------------\n";
        std::cin>>luaChon;
        switch (luaChon)
        {
        case 1:
            nhap();
            break;
        case 2:
            xem();
            break;
        case 3:
            sua();
            break;
        case 4:
            timKiem();
            break;
        case 5:
            thongKe();
            break;
        case 6:
            xoa();
            break;
        
        default:
            break;
        }
        system("cls");
    }
    
    return 0;
}