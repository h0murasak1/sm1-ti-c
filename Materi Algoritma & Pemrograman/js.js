// Kalkulator Sederhana

function hitung(operasi, angka1, angka2) {
    switch (operasi) {
        case '+':
            return angka1 + angka2;
        case '-':
            return angka1 - angka2;
        case '*':
            return angka1 * angka2;
        case '/':
            if (angka2 === 0) {
                throw new Error("Tidak dapat membagi dengan nol");
            }
            return angka1 / angka2;
        default:
            throw new Error("Operasi tidak valid");
    }
}

try {
    // Contoh penggunaan kalkulator
    var angka1 = 10;
    var angka2 = 5;
    var operasi = '+';

    var hasil = hitung(operasi, angka1, angka2);

    console.log("Hasil: " + hasil);
} catch (error) {
    console.error("Error: " + error.message);
}
