# tp12

EXERCICE1

<img width="269" height="126" alt="image" src="https://github.com/user-attachments/assets/93627860-94b9-4147-976e-0d7329384001" />


Dans cet exercice, j’ai créé une classe `Vecteur2D` contenant deux attributs privés `x` et `y`. J’ai ajouté un constructeur pour initialiser les composantes du vecteur et une méthode `afficher()` pour afficher ses valeurs. J’ai également surchargé l’opérateur `+` à l’aide de la méthode `operator+`, afin de permettre l’addition de deux objets `Vecteur2D` et de retourner un nouveau vecteur contenant la somme de leurs composantes. Enfin, dans la fonction `main`, j’ai créé deux vecteurs, effectué leur addition et affiché le résultat.

EXERCICE2 


<img width="303" height="225" alt="image" src="https://github.com/user-attachments/assets/5875805e-67b0-4e23-9579-b95db6050430" />

Dans cet exercice, j’ai créé une classe `Date` contenant trois attributs privés : `jour`, `mois` et `annee`. J’ai implémenté un constructeur par défaut et un constructeur paramétré pour initialiser les dates. J’ai ensuite surchargé les opérateurs `==` et `!=` afin de comparer deux objets `Date`. L’opérateur `==` vérifie si les trois attributs sont identiques, tandis que l’opérateur `!=` utilise le résultat de `==` pour vérifier si les dates sont différentes. Enfin, dans la fonction `main`, j’ai créé trois dates et testé les deux opérateurs de comparaison.

EXERCICE 3

<img width="291" height="338" alt="image" src="https://github.com/user-attachments/assets/e25ab988-266e-4d29-94c2-283921aab186" />


Dans cet exercice, j’ai créé une classe `Tableau` contenant un pointeur dynamique `int* data` et un attribut `taille`. J’ai utilisé un constructeur pour allouer et initialiser dynamiquement le tableau avec `new[]`. J’ai surchargé l’opérateur `[]` pour accéder aux éléments du tableau tout en vérifiant les limites des indices. En cas d’indice invalide, une exception `out_of_range` est lancée et récupérée avec `try` et `catch`. Enfin, j’ai ajouté un destructeur utilisant `delete[]` pour libérer automatiquement la mémoire allouée.

EXERCICE4

<img width="329" height="253" alt="image" src="https://github.com/user-attachments/assets/1de896ec-bec7-4086-86d0-08e04a7f58a6" />


Dans cet exercice, j’ai créé une classe `Produit` contenant trois attributs privés : `nom`, `prix` et `quantite`. J’ai ajouté un constructeur paramétré pour initialiser les informations du produit. Ensuite, j’ai surchargé l’opérateur `<<` sous forme d’une fonction amie (`friend`) afin de permettre l’accès aux attributs privés de la classe et d'afficher directement un objet `Produit` avec `cout`. Enfin, dans la fonction `main`, j’ai créé deux produits et affiché leurs informations en utilisant `cout << produit`.
