let tas = ["Pedang Kayu", "Perisai Besi"];

tas.unshift("Potion Darah");
tas.splice(2, 0, "Busur Panah");
tas.pop();

console.log("Isi tas akhir:");
console.log(tas);
