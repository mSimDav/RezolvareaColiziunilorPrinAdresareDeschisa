# RezolvareaColiziunilorPrinAdresareDeschisa

Aceasta este o aplicatie C++ pentru a evidentia diferenta dintre Verificarea Liniara, Verificarea Patratica si Dispersia Dubla, acestea fiind tehnici ce ajuta la rezolvarea coliziunilor prin adresare deschisa.

Diferenta dintre acestea apare la implementarea functiilor de dispersie corespunzatoare fiecarei tehnici. 

Figura de mai jos reprezint  elementele: 6, 1, 2, 6, 9, 1, 9, 2 inserate pe rând în tabela de dispersie, cu fecare metodă, în momentul rulării programului.

![image](https://user-images.githubusercontent.com/57152324/215295182-587ec526-a0de-4299-b265-01b3d746df94.png)

Observăm că primele 3 elemente sunt puse pe aceleași poziții în toate cele 3 metode, și anume: elementul 6 pe poziția 6, elementul 1 pe poziția 1 și elementul 2 pe poziµia 2. Apoi verifcarea liniară pune elementele pe prima poziție pe care o găsește liberă dacă cea inițială este ocupată, verifcarea pătratică pune elementele pe pozițiile "ridicate la pătrat", iar prin dispersia dublă decalajul se face cu h2(k) mod M, unde h2(k) = 1+ (k mod M −1).
