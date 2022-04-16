# Projet: Blockchain appliquée à un processus éléctoral

## Note aux correcteurs

> De nombreuses options peuvent être facilement changer depuis le fichier params.h
> Attention à partie de l'ex7, un nombre trop important de clés dans un bloc peut créer des segmentation fault (block_to_str prend trop de mémoire, il faudrait borner le nombre de déclarations par bloc --> à améliroer);
> Pas de fichiers de test pour l'exo 8, l'essentiels des tests et de la mise en pratique est dans l'exo 9

```bash
sudo chmod +x run.sh
# make ex[numero de l'exercice] pour compiler 
make ex1
# ./run.sh [numero de l'exercice]     LANCEMENT
./run.sh 1
# ./run.sh -t [numero de l'exercice]  LANCEMENT AVEC VALGRIND
./run.sh -t 1
```

## Rappel utilisation gnuplot

```bash
plot "./data/comparaison_exponentiation.txt" using 1:2 title "modpow_naive" with lines
replot "./data/comparaison_exponentiation.txt" using 1:3 title "modpow" with lines
set term postscript portrait
set output "./data/comparaison_exponentiation.ps"
set size 0.7, 0.7
```

## Error code

- 12: Erreur d'allocation
- 13: Erreur argument
- 14: Appel de fonction avec paramètre invalide
- 15: Autres

## TODOS

- [x] fuite ex6
- [x] verfier fonction ex7 (surtout serialisation, et representation binaire)
- [x] Test compute winner de l'ex 6
- [x] generer des jeux de tests
- [ ] test ex8
- [ ] ex9
- [ ] rapport

### Memory Leak

- [x] memory leak ex1
- [x] memory leak ex2
- [x] memory leak ex3
- [x] memory leak ex4
- [x] memory leak ex5
- [x] memory leak ex6
- [x] memory leak ex7

### Presentations
