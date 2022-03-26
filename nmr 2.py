stock = {
    'stoberi': 10,
    'semangka': 5,
    'apel': 20,
    'jeruk': 7,
    'mangga': 10
}
harga = {
    'stoberi': 10000,
    'semangka': 15000,
    'apel': 8000,
    'jeruk': 5000,
    'mangga': 10000
}
print('----------TOKO BUAH-------------')
print('Daftar Buah')
for key in stock:
    print(key, end=", ")
print()
buah = input('Buah apa yang ingin anda beli? ')
jumlah = int(input('Berapa jumlah buah yang anda beli? '))
if(stock[buah]>= jumlah):
    stock[buah] = stock[buah] - jumlah
    print("Total harga pembelian", harga[buah]*jumlah)
    print(f"Sisa stock buah {buah} : {stock[buah]}")
else:
    print('Maaf, stock kami tidak mencukupi')