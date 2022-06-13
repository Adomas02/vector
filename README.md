# vector



### Funkcijos:<br>
- operator= vektoriui priskiria kito vektoriaus vertes
- PushBack į vektoriaus galą idėda naują elementą
- operatorius[] prieeiga pagal indeksą
- Size grąžina kiek vektorius yra užpildytas
- Capacity grąžina kiek vektorius gali būti užpildytas
- assign priskiria elementam vertę
- front grąžina pirmą elementą
- back grąžina paskutinį elementą
- data rodyklė į konteinerį
- reserve padidina vektoriaus talpa
- empty patikrina ar vektorius tuščias
- popback išima paskutinį elementą
- clear ištuština konteinerį
- begin grąžina iteratorių pirmam elementui
- end grąžina iteratorių paskutiniam elementui


### Spartos analizė:<br>
- 10000 std::vector 0.0001133s
- 10000 vector 0.0001157s
- 100000 std::vector 0.0009025s
- 100000 vector 0.0007941s
- 1000000 std::vector 0.0079128s
- 1000000 vector 0.0049716s
- 10000000 std::vector 0.0774934s
- 10000000 vector 0.067723s
- 100000000 std::vector 0.756291s
- 100000000 vector 0.612963s

### Atminties perskirstymai 100000000 įrašų faile:<br>
- vector 26 kartai
- std::vector 27 kartai

### Spartos analizė su 100000 studentų įrašų failu: <br>
- std::vector 1.52342343s
- Vector 1.93253421s
