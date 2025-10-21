
# 🍽️ Philosophers

**Projet 42 - Cursus 42 Lyon**  
Simulation du célèbre problème des philosophes, mettant en œuvre la gestion de la concurrence à l’aide de **threads** et de **mutex** en C.

---

## 🧠 Description

Le but du projet **Philosophers** est de comprendre et d’implémenter les principes de la **programmation concurrente**.  
Chaque philosophe alterne entre manger, dormir et penser, tout en partageant des ressources communes (fourchettes).  
L’objectif est d’éviter les **situations de blocage (deadlocks)** et les **conditions de concurrence**.

---

## ⚙️ Fonctionnalités principales

- Utilisation de **pthread** pour la gestion des threads  
- Synchronisation à l’aide de **mutex** pour éviter les accès concurrents  
- Simulation précise du comportement des philosophes (temps, actions, synchronisation)  
- Paramètres configurables : nombre de philosophes, temps pour manger, dormir, etc.  
- Respect strict des contraintes de performance et de gestion mémoire  

---

## 🧠 Compétences développées

- Programmation multi-threads (pthread)  
- Gestion et synchronisation de ressources partagées  
- Concurrence, mutex et prévention des interblocages  
- Débogage et optimisation du code multi-thread  
- Rigueur et compréhension des processus système  

---

## ⚙️ Compilation

Utilisez le **Makefile** fourni :
```bash
make
```

Cela génère l’exécutable `philo` :
```bash
./philo <nombre_de_philosophes> <temps_mort> <temps_manger> <temps_dormir> [nombre_de_repas]
```

---

## 🚀 Exemple d’exécution

```bash
./philo 5 800 200 200
```

Affiche dans le terminal :
```
0 1 is eating
200 1 is sleeping
201 2 is eating
400 2 is sleeping
...
```

---

## 🖼️ Aperçu visuel
<img width="1130" height="1172" alt="image" src="https://github.com/user-attachments/assets/bddfe580-519f-44bb-aa7e-f93a77902633" />
