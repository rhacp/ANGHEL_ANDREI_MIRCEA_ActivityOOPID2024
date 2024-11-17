# Tema 1 - ANGHEL ANDREI MIRCEA (GRUPA 1116, ID)

### Run the Project

1. Copy/download the entire repository in your local Visal Studio.
2. Run the project, and only "Practice4_Tema1" will run.
3. Enjoy!

---

### Task

Sa se defineasca clasa Autobuz care are campurile:

- nrAutobuze – intreg static – contorizeaza automat numarul de autobuze create;

- idAutobuz - intreg constant - id-ul unic al autobuzului

- capacitate – intreg – numarul de persoane care pot fi imbarcate in autobuz pe locuri;

- nrPersoaneImbarcate – intreg – numarul de persoane aflate in autobuz. Nu poate fi mai mare decat capacitatea autobuzului;

- producator – char* - numele producatorului autobuzului.

Atributele clasei se definesc in zona privata a clasei

Sa se defineasca pentru clasa Autobuz constructor fara parametri, constructor cu parametri si destructor. Constructorul cu parametri contine validari pentru parametrii primiti.

Sa se defineasca pentru clasa Autobuz constructorul de copiere si metode accesor(get si set) pentru doua atribute la alegere. Testati in functia main(). 

Sa se supraincarce pentru clasa Autobuz operatorul= (de atribuire) fara a genera memory leaks si sa nu permita auto-atribuirea. Testati in functia main(). 

Sa se supraincarce operatorul << pentru afisarea obiectelor de tipul Autobuz. Elementele sunt afisate pe aceeasi linie despartite prin punct si virgula si spatiu (; ). Testati in functia main(). 

Sa se defineasca metoda getNumarLocuriLibere() care calculeaza si returneaza numarul de locuri libere ramase in autobuz. Testati in functia main(). 

Sa se supraincarce operator de cast la int care determina numarul de persoane urcate deja in autobuz. Testati in functia main(). 

Sa se supraincarce operator> care va compara doua autobuze dupa capacitatea acestora. Testati in functia main().

---

### Result

```
Constructor fara parametrii.

firstAutobuz:
nrAutobuze: 1; idAutobuz: 1; capacitate: 0; nrPersoaneImbarcate: 0; producator:

-----------------------------------

Constructor cu parametrii.

secondAutobuz:
nrAutobuze: 2; idAutobuz: 2; capacitate: 10; nrPersoaneImbarcate: 5; producator: NISSAN

-----------------------------------

Constructor de copiere.

thirdAutobuz:
nrAutobuze: 3; idAutobuz: 3; capacitate: 10; nrPersoaneImbarcate: 5; producator: NISSAN

-----------------------------------

Setters.

thirdAutobuz:
nrAutobuze: 3; idAutobuz: 3; capacitate: 30; nrPersoaneImbarcate: 20; producator: MERCEDES

-----------------------------------

Getters.

30 20 MERCEDES

-----------------------------------

getNumarLocuriLibere.

Nr. locuri libere: 10

-----------------------------------

Operator de cast la int.

Numar de persoane urcate deja in autobuz: 20

-----------------------------------

Operator >.

secondAutobuz > thirdAutobuz = false

-----------------------------------

Print object in JSON format.

thirdAutobuz:
{
    "nrAutobuze": "3",
    "idAutobuz": "3",
    "capacitate": "30",
    "nrPersoaneImbarcate": "20",
    "producator": "MERCEDES"
}
```

---