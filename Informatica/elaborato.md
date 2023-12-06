# Implementazione del Gioco del Tris in C

## Funzioni Principali

### inizializzaScacchiera

Questa funzione inizializza la scacchiera di gioco con celle vuote. La scacchiera è rappresentata da una matrice 3x3 di caratteri.

### stampaScacchiera

Questa funzione è responsabile della stampa della scacchiera di gioco sulla console. Visualizza la griglia 3x3 con le posizioni degli elementi.

### mossaGiocatore

Questa funzione consente a un giocatore di effettuare una mossa, inserendo il proprio segno nella posizione desiderata sulla scacchiera.

### controllaVittoria

Questa funzione verifica se uno dei giocatori ha vinto. Controlla le righe, le colonne e le diagonali per determinare se tre segni consecutivi sono presenti.

### controllaPareggio

Questa funzione controlla se la scacchiera è piena, il che significa che la partita è finita in pareggio.

## Flusso del Gioco

- Inizializzazione della scacchiera vuota.
- Alternanza tra i giocatori per inserire i propri segni sulla scacchiera.
- Controllo della vittoria dopo ogni mossa.
- Fine del gioco quando un giocatore vince o la scacchiera è piena (pareggio).

## Note

- Il gioco assume che i giocatori siano identificati dai segni "X" e "O".
- La scacchiera è rappresentata da una matrice 3x3 di caratteri.
- Il gioco continua finché uno dei giocatori vince o c'è un pareggio.
