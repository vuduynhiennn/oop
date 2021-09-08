#include<iostream>
using namespace std;
#include<string>

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC =======*/
class NhanVienSuaOngNuoc
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_h_sua;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
};

// hàm nhập thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so gio sua: ";
	cin >> so_h_sua;
}

// hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo gio sua: " << so_h_sua;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên sửa ống nước
float NhanVienSuaOngNuoc::Tinh_Tien_Luong()
{
	return so_h_sua * 50000;
}
// hàm tạo
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}
// hàm hủy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG =======*/
class NhanVienGiaoHang
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	int so_hang_giao;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienGiaoHang();
	~NhanVienGiaoHang();
};

// hàm nhập thông tin nhân viên giao hàng
void NhanVienGiaoHang::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so hang giao: ";
	cin >> so_hang_giao;

}

// hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo hang giao: " << so_hang_giao;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên giao hàng
float NhanVienGiaoHang::Tinh_Tien_Luong()
{
	return so_hang_giao * 33500;
}
// hàm tạo
NhanVienGiaoHang::NhanVienGiaoHang()
{

}
// hàm hủy
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN XE ÔM 4.0 =======*/
class NhanVienXeOmCongNghe
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_km;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
};

// hàm nhập thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so km chay duoc: ";
	cin >> so_km;
}

// hàm xuất thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo km: " << so_km;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên xe ôm
float NhanVienXeOmCongNghe::Tinh_Tien_Luong()
{
	return so_km * 10000;
}
// hàm tạo
NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
{

}
// hàm hủy
NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
{

}

// hàm tính tổng tiền lương của các NHÂN VIÊN SỬA ỐNG NƯỚC
double Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(NhanVienSuaOngNuoc ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm tính tổng tiền lương của các NHÂN VIÊN GIAO HÀNG
double Tong_Tien_Luong_Nhan_Vien_Giao_Hang(NhanVienGiaoHang ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm tính tổng tiền lương của các NHÂN VIÊN XE ÔM CÔNG NGHỆ
double Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(NhanVienXeOmCongNghe ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm hoán vị 2 đối tượng nhân viên SỬA ỐNG NƯỚC
void Hoan_Vi_SUA_ONG_NUOC(NhanVienSuaOngNuoc &x, NhanVienSuaOngNuoc &y)
{
	NhanVienSuaOngNuoc tam = x;
	x = y;
	y = tam;
}

// hàm hoán vị 2 đối tượng nhân viên SỬA GIAO HÀNG
void Hoan_Vi_GIAO_HANG(NhanVienGiaoHang &x, NhanVienGiaoHang &y)
{
	NhanVienGiaoHang tam = x;
	x = y;
	y = tam;
}

// hàm hoán vị 2 đối tượng nhân viên SỬA XE ÔM CÔNG NGHỆ
void Hoan_Vi_XE_OM_CN(NhanVienXeOmCongNghe &x, NhanVienXeOmCongNghe &y)
{
	NhanVienXeOmCongNghe tam = x;
	x = y;
	y = tam;
}


// hàm sắp xếp danh sách nhân viên SỬA ỐNG NƯỚC giảm dần theo lương
void Sap_Xep_Danh_Sach_Nhan_Vien_SUA_ONG_NUOC_Giam_Dan_Luong(NhanVienSuaOngNuoc ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_SUA_ONG_NUOC(ds[i], ds[j]);
			}
		}
	}
}

// hàm sắp xếp danh sách nhân viên GIAO HÀNG giảm dần theo lương
void Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Luong(NhanVienGiaoHang ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_GIAO_HANG(ds[i], ds[j]);
			}
		}
	}
}
// hàm sắp xếp danh sách nhân viên XE ÔM CÔNG NGHỆ giảm dần theo lương
void Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_CN_Giam_Dan_Luong(NhanVienXeOmCongNghe ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_XE_OM_CN(ds[i], ds[j]);
			}
		}
	}
}

// thiết kế menu xử lý
void Menu(NhanVienSuaOngNuoc ds_nv_suaongnuoc[], NhanVienGiaoHang ds_nv_giaohang[], NhanVienXeOmCongNghe ds_nv_xeomcongnghe[], int n, int m, int l)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== CHUONG TRINH QUAN LI ======";
		cout << "\n1. Nhap thong tin nhan vien SUA ONG NUOC";
		cout << "\n2. Nhap thong tin nhan vien GIAO HANG";
		cout << "\n3. Nhap thong tin nhan vien XE OM CONG NGHE";
		cout << "\n4. Xuat danh sach thong tin nhan vien SUA ONG NUOC";
		cout << "\n5. Xuat danh sach thong tin nhan vien GIAO HANG";
		cout << "\n6. Xuat danh sach thong tin nhan vien XE OM CONG NGHE";
		cout << "\n7. Tong tien luong cua 3 loai nhan vien";
		cout << "\n8. Sap xep danh sach cac loai nhan vien giam dan theo luong";
		cout << "\n0. KET THUC";
		cout << "\n\n\t\t ============= END =================";

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 8)
		{
			cout << "\nLUA CHON KHONG HOP LE. XIN KIEM TRA LAI";
		}
		else if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			NhanVienSuaOngNuoc nv_suaongnuoc; // đối tượng giá trị
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
			nv_suaongnuoc.Nhap();

			// thêm đối tượng giá trị "nv_suaongnuoc" vào danh sách "ds_nv_suaongnuoc"
			ds_nv_suaongnuoc[n] = nv_suaongnuoc;
			n++;
		}
		else if (luachon == 2)
		{
			NhanVienGiaoHang nv_giaohang; // đối tượng giá trị
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG\n";
			nv_giaohang.Nhap();

			// thêm đối tượng giá trị "nv_giaohang" vào danh sách "ds_nv_giaohang"
			ds_nv_giaohang[m] = nv_giaohang;
			m++;
		}
		else if (luachon == 3)
		{
			NhanVienXeOmCongNghe nv_xeomcongnghe; // đối tượng giá trị
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM CONG NGHE\n";
			nv_xeomcongnghe.Nhap();

			// thêm đối tượng giá trị "nv_xeomcongnghe" vào danh sách "ds_nv_xeomcongnghe"
			ds_nv_xeomcongnghe[l] = nv_xeomcongnghe;
			l++;
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC\n";
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " <<i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_suaongnuoc, n);
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN GIAO HANG\n";
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_giaohang, m);
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE\n";
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcongnghe[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(ds_nv_xeomcongnghe, l);
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t TONG TIEN CONG TY CAN TRA HANG THANG: " << (size_t)(Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_suaongnuoc, n) + Tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_giaohang, m) + Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(ds_nv_xeomcongnghe, l));
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN SUA ONG NUOC\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_SUA_ONG_NUOC_Giam_Dan_Luong(ds_nv_suaongnuoc, n);
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}

			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN GIAO HANG\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Luong(ds_nv_giaohang, m);
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}

			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN XE OM CONG NGHE\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_CN_Giam_Dan_Luong(ds_nv_xeomcongnghe, m);
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcongnghe[i].Xuat();
			}
			system("pause");
		}
	}
}

int main()
{
	NhanVienSuaOngNuoc ds_nv_suaongnuoc[100]; // mảng 1 chiều các nhân viên sửa ống nước - mỗi phần tử là 1 đối tượng giá trị
	NhanVienGiaoHang ds_nv_giaohang[100]; // mảng 1 chiều các nhân viên giao hàng - mỗi phần tử là 1 đối tượng giá trị
	NhanVienXeOmCongNghe ds_nv_xeomcongnghe[100]; // mảng 1 chiều các nhân viên xe ôm công nghệ - mỗi phần tử là 1 đối tượng giá trị
	int n = 0; // số lượng nhân viên sửa ống nước
	int m = 0; // số lượng nhân viên giao hàng
	int l = 0; // số lượng nhân viên xe ôm công nghệ
	
	Menu(ds_nv_suaongnuoc, ds_nv_giaohang, ds_nv_xeomcongnghe, n, m, l);

	system("pause");
	return 0;
}