1.Mở chương trình:

-Sử dụng Visual Studio Code

-Mở project trong VS Code

-Mở terminal tích hợp (Ctrl+`)

-Chạy lệnh biên dịch:

Biên dịch chương trình GIẢI MÃ:

gcc -o rc4_decrypt.exe main.c rc4_init.c rc4_stream.c rc4_decrypt.c

-Chạy chương trình:

./rc4_decrypt.exe

2.Hướng dẫn sử dụng chương trình:

-Quy trình GIẢI MÃ:

Nhập độ dài vector S (1-256)

Nhập độ dài khóa K (phải giống khóa mã hóa)

Nhập giá trị khóa K (từng số nguyên)

Nhập độ dài ciphertext

Nhập ciphertext (chuỗi ký tự)

Chương trình xuất ra plaintext

3.Bộ test vector:

Test Vector 1:

-MÃ HÓA:

Nhap do dai cua vector S: 8

Khoi tao gia tri ban dau cua S ! 0 1 2 3 4 5 6 7

Nhap do dai cua khoa K: 3

Nhap gia tri cua K:

1 2 3

Vector khoi tao T ! 1 2 3 1 2 3 1 2

Vector hoan vi S ! 2 0 1 3 7 5 6 4

Nhap chieu dai chuoi Plaintext: 3

Nhap Plaintext: ABC

Dong khoa la: 1 3 2

Ciphertext la: @ A A

-GIẢI MÃ:

Nhap do dai cua vector S: 8

Khoi tao gia tri ban dau cua S ! 0 1 2 3 4 5 6 7

Nhap do dai cua khoa K: 3

Nhap gia tri cua K:

1 2 3

Vector khoi tao T ! 1 2 3 1 2 3 1 2

Vector hoan vi S ! 2 0 1 3 7 5 6 4

Nhap chieu dai chuoi Ciphertext: 3

Nhap Ciphertext: @AA

Dong khoa la: 1 3 2

Plaintext la: A B C

Test Vector 2:

-MÃ HÓA:

Nhap do dai cua vector S: 10

Khoi tao gia tri ban dau cua S ! 0 1 2 3 4 5 6 7 8 9

Nhap do dai cua khoa K: 3

Nhap gia tri cua K:

1 2 3

Vector khoi tao T ! 1 2 3 1 2 3 1 2 3 1

Vector hoan vi S ! 1 3 4 9 5 6 0 2 7 8

Nhap chieu dai chuoi Plaintext: 6

Nhap Plaintext: 223982

Dong khoa la: 4 0 5 9 7 3

Ciphertext la: 6 2 6 0 ? 1

-GIẢI MÃ:

Nhap do dai cua vector S: 10

Khoi tao gia tri ban dau cua S ! 0 1 2 3 4 5 6 7 8 9

Nhap do dai cua khoa K: 3

Nhap gia tri cua K:

1 2 3

Vector khoi tao T ! 1 2 3 1 2 3 1 2 3 1

Vector hoan vi S ! 1 3 4 9 5 6 0 2 7 8

Nhap chieu dai chuoi Ciphertext: 6

Nhap Ciphertext: 6260?1

Dong khoa la: 4 0 5 9 7 3

Plaintext la: 2 2 3 9 8 2
