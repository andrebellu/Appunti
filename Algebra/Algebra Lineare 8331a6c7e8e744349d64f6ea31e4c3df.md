# Algebra Lineare

Course: Algebra Lineare (https://www.notion.so/Algebra-Lineare-4179a8cb72b142629e12a92ea26f619d?pvs=21)
Last Edited: November 1, 2023 4:53 PM

# Insiemistica

….

# Infarinatura Funzioni

## Troncamento

Sia $f:X\rightarrow Y$ una funzione e $f(x)\subseteq Z \subseteq Y$ (Z contiene l’immagine di f). Si dice TRONCAMENTO di f a Z la funzione $f^{|Z}: X \rightarrow Z$ e tale che $\forall x \in X : f^{|Z}(x) = f(Z)$.

\immagine

## Restrizione

Sia $W\subseteq X$ e $f:X\rightarrow Y$ funzione(Z contiene l’immagine di f). Si dice RESTRIZIONE di f a W la funzione $f_{|W} : W \rightarrow Y$ e tale che $f_W = \{(x, y) e f|c\in W\}$.

\immagine

## Composizione di funzioni

Siano $f: X \rightarrow Y, g: Y\rightarrow Z$ si dice composizione di $f$ e $g$:

$g o f: X \rightarrow Z$ data da $g(f(x)) = g o f(x)$

$(gof) :=\{(x, z) \in X\times Z | \exists y \in Y:(x,y)\in f\ \& \ (y,z) \in g\}$

### Proprietà:

Siano $f:X\rightarrow Y, g:Y\rightarrow Z, h:Z\rightarrow W$:

$$
h\circ(g\circ f):X\rightarrow W \implies x\rightarrow h(\textcolor{red}{g(f(x)}))
$$

$$
\textcolor{red}{(h\circ g)}\circ f : X\rightarrow W \implies x\rightarrow \textcolor{red}{(h\circ g)}(f(x)) = h(g(f(x)))
$$

$$
\text{\textcolor{red}{Proprietà associativa della composizione di funzioni}}
$$

## Suriettiva, Iniettiva e Biiettiva

Sia $f: X\rightarrow Y$ una funzione, $f \subseteq X \times Y$. Si dice $f^{opp} = \{(y, x)\in Y\times X|(x,y) \in f\}$. $f^{opp}$ può essere anche solamente una relazione, per fare in modo che sia anch’essa una funziona $f$ deve essere biiettiva, cioè ogni elemento di $X$ deve avere una singola corrispondenza in $Y$.

1. Suriettiva $\iff \forall y \in Y \exists x \in X : f(x) = y$
2. Iniettiva $\iff \forall y \in Y \exists _{≤ 1} x \in X : f(x) = y$
3. Biiettiva $\iff \forall y \in Y \exists! x \in X : f(x) = y$

<aside>
💡 Osservazione:
1. $f^{opp}: X \rightarrow Y$ funzione $\iff f$ biiettiva
2. $f$ biiettiva $\iff$ $f$ è “uno ad uno”
3. Se $\exists f: X\rightarrow Y$ biiettiva $\Longrightarrow |X|=|Y|$

</aside>

### Insieme infinito

Si dice che un insieme $X$ è infinito $\iff \exists Y \subseteq X, y ≠ X$ ed una funzione $f: X \rightarrow Y$ biiettiva.

Esiste una gerarchia di infiniti, diciamo che 2 insiemi hanno la stessa cardinalità (infinita) se esiste una biiezione fra essi.

$$
|\mathbb{N} | = | \Z | = | \mathbb{Q} | < |\R| = |\mathbb{C}|
$$

## Funzione opposta

$f^{opp}$ cosa è quando f è una funzione biiettiva?

$$
f: X\rightarrow Y\ \textrm{biiettiva} \iff f^{opp} \ \textrm{è una funzione}
\\ f^{opp}: Y \rightarrow X
$$

$$
⁍
$$

$$
⁍
$$

$$
(f^{opp} \circ f) = \{(x, y) \in X \times X \mid (x_1, y) \in f, (y, x_2) \in f^{opp}\} = \{(x_1, y_2) \in X \times X \mid (x_1, y) \in f, (x_2, y) \in f\}\}
$$

$$
\textrm{ma f è biiettiva (e quindi iniettiva)}
$$

$$

(x_1, y) \in f \ \&\ (x_2, y) \in f \implies x_1 = x_2
\\= \{(x, x) \in X \times X\} = \iota_x\ \text{funzione identica}

$$

$$
(f \circ f^{opp}):Y\rightarrow Y \ \text{in modo analogo si fa vedere che è} \{(y, y) \in Y\times Y\}=\iota_y\ \text{funzione identica su Y}
$$

Diciamo che in questo caso $f^{opp} = f^{-1}$ funzione inversa di $f$.

$$
f: X\rightarrow Y \\ f^{-1}: Y\rightarrow X\ : \\
(f \circ f^{-1}): Y \rightarrow Y \\ (f^{-1} \circ f): X \rightarrow X
$$

Una funziona identica $\iota$ associa ogni elemento a se stessa.

# Sequenza

Lista ordinata con ripetizioni di elementi di un insieme. $(a, b, c) ≠ (a, c, b), (a, a, b) ≠ (a, b)$

Definiamo $I_n =\{1, 2, …., n\}$ insieme dei primi $n$ numeri naturali. Una sequenza di $n$ elementi di $X$ è una funzione $\sigma : I_n \rightarrow X$. (Ad ogni intero $1≤i≤n$ associa un elemento di $X$).

$$
(a, b, a) \rightarrow \{(1, a), (2, b), (3, a)\}
$$

<aside>
💡 **NOTA BENE**
Nulla ci vieta di identificare gli elementi di $X\times X$ con sequenze ordinate di elementi di $X$ di lunghezza 2.

</aside>

<aside>
💡 $**(a,b) = \{a, \{ab\}\}$ coppia ordinata**
$**(a,b) = \{(1, a), (2, b)\}$ sequenza**
Le coppie ordinate e le sequenze si comportano al medesimo modo nonostante siano due cose diverse, a livello di definizione le coppie ordinate vengono prima, in quanto all’interno della successione sono presenti, appunto, delle coppie ordinate.

</aside>

<aside>
💡 Siano $X, Y, Z$ 3 insiemi:

$X\times (Y\times Z) = \{(x, (y, z)) | x\in X, y \in Y, z \in Z\}$

$(X\times Y)\times Z = \{(x, y), z))| x\in X, y \in Y, z \in Z\}$

Il prodotto cartesiano non è associativo.

</aside>

# Ricapitolando…

- Insiemi: non ordinato senza ripetizione
- Sequenze: ordinate con ripetizione
- Sistema (Multi Insieme): non ordinato e con ripetizione

# Algebra

Studio di strutture, insiemi di oggetti e delle loro operazioni.

1. Vogliamo capire come le operazioni agiscono sugli insiemi trasformando i loro elementi.
2. In generale degli enti sono descritti “bene” dalle trasformazioni che li lasciano invariati.

# Strutture algebriche

> $X$ non vuoto e siano $\phi_1 … \phi_n: X\times X \rightarrow X$ (operazioni binarie), $n \in \mathbb{N}$. Definiamo $(X, \phi_1 … \phi_n)$ struttura algebrica.
Sostanzialmente sono delle operazioni su di un insieme (insieme con una o più operazioni definite su di esso).
> 

Esempio:

$X = \N,\ n=1 \\ \phi_1:=\N \times \N \rightarrow \N : \phi_1(n, m) = n + m \in \N$                                 $(\N, \phi_1)$ ⇒ struttura algebrica

<aside>
💡 Altri esempi:

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled.png)

</aside>

## Proprietà delle operazioni

Sia $(X, +)$ una struttura algebrica:

- **ASSOCIATIVA** $\forall a,b,c \in X \implies(a+b)+c = a+(b+c)$
- **ELEMENTO NEUTRO $\exists O_x \in X : \forall a \in X \implies a + O_x = a$**
- **INVERSO ALGEBRICO $\forall a \in X \ \exists \ a’ \in X:a +a’= O_x$**
- **COMMUTATIVA $\forall a,b \in X \implies a+b = b+a$**
- **DISTRIBUTIVA: siano $+\ \ \text{e} \ \ \cdot$ due operazioni binarie, $\forall a,b,c \in X:$**
    - $a+(b\cdot c) = a\cdot b + a\cdot c$
    - $(a+b)\cdot c = a\cdot c + b\cdot c$

<aside>
💡 $X$ insieme        $S(x) = \{f: X\rightarrow X | X\ \text{biettiva}\}$

$S((x), \cdot )$ ove $\cdot$ = composizione di funzioni.

**OSSERVAZIONE**: $(S(x), \cdot)$ è una struttura algebrica

1. $\cdot$ è un’operazione su $S(x)$
2. esiste l’elemento neutro dato da $\iota_x(x) = x$ [funzione identica]
3. l’operazione $\cdot$ è associativa
4. ogni elemento di $S(x))$ ammette inverso rispetto “ $\cdot$ ”.    $f \in S(x) \implies f^{-1} = f^{opp} \in S(x) \ \ \ \ \ f \circ f^{-1} = f^{-1} \circ  f = \iota_x$

E’ una struttura algebrica importante che prende il nome di **GRUPPO SIMMETRICO** su $X$.

</aside>

## Gruppi

Una struttura algebrica $(G, \cdot)$ è detta **GRUPPO** se: 

1. $\cdot$ ammette elemento neutro 1g
2. $\forall g \in G \exists g^{-1} \in G : g^{-1} \cdot g = g \cdot g^{-1} = 1_g$ ogni elemento ammette inverso
3. l’operazione $\cdot$ è associativa $\forall a,b,c \in G: a\cdot (b\cdot c) = (a\cdot b) \cdot c$

**(ASSOCIATIVA, ELEMENTO NEUTRO, INVERSO ALGEBRICO)**

ESEMPI: $(\Z, +), (\mathbb{Q},+) (\mathbb{Q}^x, \cdot)$

### Gruppi abeliani

Un gruppo è detto commutativo o abeliano se $\forall a,b \in G: a \ast b = b \ast a$

(ASSOCIATIVA, ELEMENTO NEUTRO, INVERSO ALGEBRICO, **********************COMMUTATIVA**********************)

ESEMPI: 

$(\Z, +), (\mathbb{Q}, +), (\R, +)$⇒  sono gruppi abeliani
$(\N,+)$⇒ non è gruppo abeliano perché non ammette inverso algebrico

Verifica che $(\Z, +)$ sia un gruppo abeliano:

- $0 \in \Z \ \ \& \ \ a+0 = 0+a = a$ ⇒ elemento neutro
- $\forall a \in \Z \exists (-a) \in Z : a+(-a)=0$ ⇒ inverso algebrico
- $\forall a,b,c \in \Z : a+(b+c) = (a+b)+c$ ⇒ associativa
- $\forall a,b \in \Z: a+b = b+a$ ⇒ commutativa

$**(\Z, +)$ è un gruppo abeliano.**

<aside>
💡 $**(\Z, -)$ non è un gruppo!!**

</aside>

<aside>
💡 Altri gruppo abeliani:
$(\mathbb{Q}^x, \cdot) \ \text{ove} \ \mathbb{Q}^x = \mathbb{Q} \setminus \{0\}$
$(\mathbb{R}^x, \cdot) \ \text{ove} \ \mathbb{R}^x = \mathbb{R} \setminus \{0\}$

NB: $(\R, \cdot)$ non è un gruppo perché 0 non ammette inverso!

</aside>

Siano $(G, \ast), (H, \bigtriangleup)$ due gruppi, allora $G\times H$ può essere dotato di struttura di gruppo considerando l’operazione $\star$ data da $(g_1, h_1) \star (g_2, h_2) = (g_1 \star g_2, h_1 \bigtriangleup h_2)$. **Significa che dati due gruppi è possibile dotare il loro prodotto cartesiano di una struttura algebrica lavorando componente per componente.**

→ $(G, \star)$ e consideriamo $(G^n, \star)$

### $\R^3$, Dimostrazione gruppo abeliano

$\R^3 = \{(a_1, a_2, …, a_n) | a_i \in \R\}$, definiamo in $\R^3$ l’operazione $+ \ : (a_1, a_2, a_3) + (b_1, b_2, b_3) = (a_1 + b_1, a_2+b_2 + a_3 +b_3)$ ⇒ somma componente per componente

$(\R^3, +)$ è un gruppo abeliano, ha un elemento neutro, inverso e ammette proprietà associativa.

$$
\text{proprietà associativa:} \ (a_1,b_1,c_1)+(0,0,0) = (a_1 + 0,b_1+0,c_1+0) = (a_1, b_1, c_1) \\ (0,0,0)+(a_1,b_1,c_1) = (a_1, b_1, c_1)
$$

$$
\exists \ \text{inverso} \ \forall \ \text{elemento} \ : \forall(a_1, b_1, c_1) = R^3(-a_1, -b_1, -c_1) \in R^3: (a_1, b_1, c_1) + (-a_1, -b_1, -c_1) = (a_1 - a_1, b_1 - b_1, c_1-c_1) = (0,0,0)

$$

$$
\text{proprietà associativa}: (a_1, b_1, c_1) + ((a_2, b_2, c_2) + (a_3, b_3, c_3)) = (a_1, b_1, c_1) + (a_2 + a_3, b_2 + b_3, c_2 + c_3) = (a_1+(a_2+a_3), b_1+(b_2+b_3), c_1+(c_2+c_3)) = (a_1+(a_2+a_3), b_1+(b_2+b_3), c_1+(c_2+c_3)) = (a_1 + a_2, b_1 + b_2, c_1+c_2) + (a_3, b_3, c_3) = ((a_1, a_2, a_3)+(b_1, b_2, b_3))+(a_3, b_3, c_3)
$$

### Esempio di gruppo non abeliano

Il gruppo simmetrico su di un insieme $X$ non commutativo.
Sia $X$ insieme, $S(X):=\{f:X\rightarrow X| f  \ \text{è biettiva}\}, (S(X), \circ)$ è un gruppo non commutativo

OSSERVAZIONE:

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%201.png)

## Campi

$(\mathbb{K}, +, \cdot)$ ⇒ struttura algebrica con $\mathbb{K}$ insieme, due operazioni binarie, $+:\mathbb{K} \times \mathbb{K} \rightarrow \mathbb{K} \ \ \ \ \cdot :\mathbb{K} \times \mathbb{K} \rightarrow \mathbb{K}$ tale che:

- $(\mathbb{K}, +)$ è un gruppo abeliano
- $(\mathbb{K} \setminus \{0\}, \cdot)$ è un gruppo abeliano
- Valgono le proprietà distributive della somma rispetto il prodotto ⇒ $\forall a,b,c \in \mathbb{K} : (a+b)c = ac +bc 
\\a(b+c) = ab +ac$

Un campo è un ambiente giusto dove studiare e risolvere un’equazione di primo grado.

<aside>
💡 OSSERVAZIONE:
$(\Z, +, \cdot)$ non è un campo è un campo perché elementi $≠ \pm 1$ non hanno reciproco in $\Z$.
$2x+3=0$ non ha soluzioni in $\Z$.

</aside>

****************************Osservazione:**************************** sia $1$ l’elemento neutro per il prodotto in $\mathbb{K}$ ($1$ come numero in $\mathbb{Q}, \R, \mathbb{C}$; in generale $[1] \ \text{in} \ \Z_2$. Individuiamo con $-1$ l’opposto di $1$ rispetto +. Allora $\forall x\in \mathbb{K} \ \ \ (-1)\cdot x = -x$.

******************************Dimostrazione:****************************** 

$$
x + (-1)\cdot x=1\cdot x + (-1)\cdot x=(1+(-1))\cdot x = 0\cdot x, \text{ma} \ 0\cdot x=(0+0)\cdot x = 0\cdot x + 0 \cdot x \implies 0=-(0\cdot x)+(0\cdot x)+(0 \cdot x)=0+0\cdot x = 0 \cdot x
$$

In particolare $x+(-1)\cdot x = 0\cdot x = 0$, da cui sommando a destra e a sinistra $-x$ si ottiene $(-1)\cdot x = -x +x+(-1)\cdot x = -x$

******NB:****** moltiplicare per 0 in un campo da sempre 0!!!

********************************Osservazione 2:******************************** sia data l’equazione $x\cdot y = 0$ in un campo $\mathbb{K}$. Allora le soluzioni sono tutte del tipo $x=0 \lor y=0$ cioè $**\textcolor{red}{S=\{(x, 0)|x\in \mathbb{K}\} \cup\{(0, y)|y\in \mathbb{K}\}}$ ⇒ legge di annullamento del prodotto**

Se $x=0 \lor y=0 \implies xy=0$. 

Supponiamo $xy=0$ con $x≠0 \implies \exists x^{-1} \in \mathbb{K} \implies \\ \\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \  x^{-1} (xy)=x^{-1}\cdot0=\textcolor{cyan}{0} \\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ 
(x^{-1}x)y=1\cdot y = \textcolor{cyan}{y}$

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%202.png)

### Insieme $\Z_n$: **insieme delle classi resto modulo n**

Partiamo dall’insieme $\Z$ dei numeri interi, consideriamo $n\in \N \ \ n>1$ e definiamo $\Z_n$ come insieme $\{0,1…n-1\}$, con le operazioni

$$
+:\Z_n \times \Z_n \rightarrow \Z_n \\
(a,b)\rightarrow(a+b)\%n \ \ \ \text{resto della divisione per n di} \ (a+b)
$$

$$
\Z_N \times \Z_n \rightarrow \Z_n \\
(a,b) \rightarrow(a\cdot b)\%n
$$

Esempio:

$\Z_{31} \ \ \ \ 17+26=43\% 31 = 12 \\ 6\cdot11=66\%31=4$

**Teorema:** $(\Z_n,+,\cdot)$ è un campo $\iff n$ è un numero primo

- $(\Z_2,+,\cdot)$ è un campo

- $(\Z_4,+,\cdot)$ non è un campo ⇒
Per essere un campo avrebbe dovuto avere, in tutte le righe e le colonne, tutti gli elementi dell’insieme.

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%203.png)

# Campo complesso $(\mathbb{C}, +, \cdot)$

Consideriamo l’insieme di tutte le coppie ordinate $(a,b)$ di elementi di $\R$.

$z = (a,b) \rightarrow a+ib$

Per convenzione scriviamo a per la coppia $(a,0) \rightarrow a+i0$

**********Somma:********** $(a+ib) + (c+id) := (a+c)+i(b+d)$

******************Prodotto:****************** $(a+ib) \cdot (c+id) := (ac-bd)+i(bc+ad)$

<aside>
💡 $i^2 = (0+i\cdot1)=-1$

</aside>

### Dimostrazione: $(\mathbb{C}, +, \cdot)$ è un campo

1. $(\mathbb{C}, +)$ gruppo abeliano, vale perché $(\mathbb{C}, +)$ corrisponde ad $(\R\times\R, +)$
    1. $(a + ib) + (0 + i \cdot 0) = (a + 0) + i (b + 0) = a + ib$
    2. $(a+ib)+(-a+i(-b)) = (a-a)+i(b-b)=0+i\cdot0=0$
    3. ASSOCIATIVA
2. Valgono le proprietà distributive:
    1. $(a + ib) [ ( c +id) + (c + if )] = (a + ib) [ (c+e) + i(d+f)] = [ a (c +e) - b (d+ f )] + i [ a (d+f) + b (c+e) ] = [(\textcolor{red}{ac} +\textcolor{orange}{ae}) - (\textcolor{blue}{bd}+\textcolor{green}{bf})] + \textcolor{purple}{i [(ad +ef) + (bc+be)]}$
    2. $(a+ib) (c+id) + (a+ib) (e+if) = (\textcolor{red}{ac}-\textcolor{blue}{bd}) + \textcolor{purple}{i (bc +ad) }+ (\textcolor{orange}{ae}-\textcolor{green}{bf})+ \textcolor{purple}{i (af+be)}$
3. Con il prodotto:
    1. $(1+i0)(a+ib)=a+ib$
    2. $(a+ib)(x+iy)=1+i0$ ⇒ inverso$\begin{cases}(ax-by)=1 \\ (ay+bx)=0\end{cases}$
    se $a=b=0$ allora l’inverso non esiste!
    
    Se $a≠0, b=0 \begin{cases} 
    ax=1 \implies x=a^{-1} \ \ \ a\in\R \\ 
    
    ay=0 \implies y=0
    
    \end{cases}$
    
    Se $a=0, b\ne0 \begin{cases} 
    -by=1 \implies y=-1 \\ 
    
    bx=0 \implies x=0
    
    \end{cases}$
    
    Se $a≠0, b\ne0 \begin{cases} 
    ax-by=1 \implies y=\frac{-bx}{a} = -a^{-1}bx \\
    
    ay+bx=0 \implies ax+b(a^{-1}bx)=1 \implies (a+b^2a^{-1})x=1\implies \frac{a^2+b^2}{a}x=1 \implies x=\frac{a}{a^2+b^2} \land y=\frac{-b}{a^2+b^2}
    
    \end{cases} \\$
        
        <aside>
        💡 Abbiamo visto che l’inverso moltiplicativo esiste sempre tranne che per $0=0+i0$.
        
        </aside>
        
    3. con un po’ di conti si dimostra anche la proprietà associativa

$(\mathbb{C}, +, \cdot)$ è un ********************************************************campo algebricamente chiuso.********************************************************

## Teorema fondamentale dell’algebra

Sia $f(x)$ un polinomio in $X \ deg\geqslant 1$. Ogni equazione del tipo $f(x)=0$ con $f(x)$ polinomio a coefficienti in $\mathbb{C}$ di $deg \ \geqslant 1$ ammette almeno una soluzione. Conseguentemente ne ammette sempre $n = deg f(x)$ contate con molteplicità.

⇒ $\mathbb{C}$ è algebricamente chiuso.

**Osservazione:** $(\R, +, \cdot)$ $\sqrt{-1} = ?$       $\sqrt{-1} \notin \R$        $\forall \alpha\in\R\alpha^2\geqslant0$

$ax^2+bc+c =0$   $a≠0$

$\Delta = b^2-4ac$

$ax^2+bx+c=(\alpha x + \beta)^2$    $\begin{cases} 
\Delta > 0 \ \ \text{due soluzioni reali e distinte} \\

\Delta = 0 \ \ \text{due soluzioni reali e coincidenti} \\

\Delta < 0 \ \ \text{due soluzioni immaginarie (e coniugate)}
\end{cases}$

****************************Osservazione:**************************** Il teorema fondamentale dell’algebra dice che un polinomio $f(x) \in \mathbb{C} [x]$ (polinomio in x a coefficienti in $\mathbb{C}$) con $deg f(x) = n \geqslant 1$ ha sempre almeno una radice $\alpha \exists \alpha \in \mathbb{C} : f(\alpha) = 0$

## Teorema di Ruffini

Per i polinomi vale a coefficienti su di un campo $\mathbb{K}$, vale il **************************************Teorema di Ruffini.**************************************

$f(x)=a_0+a_1x+...+a_nx^n \ e \ f(\alpha) = 0 \implies f(x) = (x-\alpha)(b_0+b_1x+...+b_{n-1}x^{n-1})$ è una conseguenza della legge di annullamento del prodotto.

$deg f(x)=n; f(\alpha) = 0$ 

- se $n=1 \implies f(x) = a(x-\alpha)$
- se $n>1 \implies f(x) = a(x-\alpha)g(x)$ con $deg \ g(x) = n-1$

## Coniugato

Sia $z=a+ib \in \mathbb{C}$, definiamo “z coniugato” $\bar{z} := a-ib$.

<aside>
💡 Proprietà:

1. $\overline{a+b} = \overline{a}+\overline{b}$
2. $\overline{a\cdot b} = \overline{a} \cdot \overline{b}$

Il coniugio è un **automorfismo** di $\mathbb{C}$.

> **è un’operazione $\mathbb{C} \rightarrow \mathbb{C}$ che è compatibile (rispetta) le operazioni algebriche di un campo**
> 
</aside>

**Dimostrazione:**

$\overline{(a+ib)\cdot(c+id)} = \overline{(ac-bd)+i(ad+bc)} = (ac-bd)-i(ad+bc)=\textcolor{cyan}{(ac-bd)+i(-ad-bc)}$

$\overline{(a+ib)}\cdot\overline{(c+id)} = (a-ib)(c-id)=\textcolor{cyan}{(ac-bd)+i(-bc-ad)}$

### Altre proprietà

Sia $z=a+ib \in \mathbb{C}$

1. $\bar{z} = z \iff b = 0 \implies z=a+i0=a$ in tal caso si identifica $z$ col numero reale $a$.
2. $\bar{z} + z = 0 \implies \bar{z}=-z \iff a=0$ in tal caso $z=ib$ è detto numero immaginario puro
3. $\dfrac{1}{2}(z+\bar{z} = \dfrac{[(a+ib)+(a-ib)]}{2} = a =:Re(z) \in \R \implies$ parte reale di $z$.
4. $\dfrac{1}{2i}(z\cdot \bar{z})=\dfrac{(a+ib)-(a-ib)}{2i} = b =: Im(z) \implies$parte immaginaria di $z$.
5. $z\cdot\bar{z} = (a+ib)(a-ib)=a^2+b^2\geqslant0 \ \ \ \in \R$
    
    Poniamo $|z|:=\sqrt{z\cdot\bar{z}}$
    
    <aside>
    💡 NOTA BENE:
    se $z \in \R \implies |z| = |a| = \sqrt{a^2}$
    
    ![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%204.png)
    
    </aside>
    
6. se $z=a+ib \implies z^{-1} = \dfrac{\bar{z}}{z\cdot\bar{z}}$
    
    <aside>
    💡 Osservazione:
    $\bar{z} = \dfrac{a-ib}{a^2+b^2} = \dfrac{a}{a^2+b^2} - i\dfrac{b}{a^2+b^2} \ \ \ \text{con} \ \ \ a^2+b^2 \in \R$
    
    </aside>
    
7. sia $f(x) \in \mathbb{C}[x] \implies \overline{f(x)} \in \mathbb{C}[\bar{x}]$

$a_0+a_1x+a_2x^2+… \ \ \ \ \ \overline{f(x)} \implies \overline{a_0}+\overline{a_1x}+\overline{a_2x^2}+….$

$\ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \ \overline{f}(x) \implies \overline{a_0}+\overline{a_1}x+\overline{a_2}x^2+.…$

Sia $\alpha : f(\alpha) = 0 \implies \overline{f(\alpha)} = \bar{0} = 0$ 
Se $\alpha$ è radice di $f(x) \implies \bar{\alpha}$ è radice di $\overline{f}(x)$
Supponiamo $f(x) \in \R[x]$ a coefficienti in $\R$. Allora $f(x) = \overline{f}(x)$.
Da questo discerne che se $\alpha$ è radice complessa di $f(x)$ polinomio a coefficienti reali $\implies \bar{\alpha}$ è radice. $\ \ f(\alpha)=0\iff f(\bar{\alpha}) = 0 \ \ \text{con}  \ \ f(x) \in \R[x]$
Ci sono due possibilità in $\R$:
    1. $\alpha = \bar{\alpha} \implies \alpha \in \R \implies (x-\alpha)\in\R[x]$ divide $f(x)$
    2. $\alpha ≠ \bar{\alpha} \implies (x-\alpha) \ \text{e} \ (x-\bar{\alpha})$ dividono entrambi $f(x)$ e sono polinomi complessi, $\alpha\in\R$. $\implies (x-\alpha)(x-\bar{\alpha})$ divide $f(x)$ e $(x-\alpha)(x-\bar{\alpha} = (x^2 - (\alpha+\bar{\alpha})x+\alpha\alpha^2) \in\R[x]$

# Spazi vettoriali

Siano $K$ un campo e $V$ un insieme. Si dice che $V$ è uno spazio vettoriale sul campo $K$, se sono definite due operazioni: un’operazione interna binaria su $V$, detta somma, $+: V \times V \rightarrow V$ e un’operazione esterna, detta prodotto esterno o prodotto per scalari, $\bullet : K \times V \rightarrow V$, tali che:

1. $(V, +)$ sia un gruppo abeliano;
2. il prodotto esterno $\bullet$ soddisfi le seguenti proprietà:
    1. $(h\cdot k)\bullet \bar{v} = h\bullet(h\bullet \bar{v}) \ \ \ \forall h,k \in K \ \ \ \text{e} \ \ \ \forall \bar{v} \in V$
    2. $(h+ k)\bullet \bar{v} = h\bullet \bar{v}+k\bullet \bar{v} \ \ \ \forall h,k \in K \ \ \ \text{e} \ \ \ \forall \bar{v} \in V$
    3. $h\bullet(\bar{v}+\bar{w}) = h\bullet\bar{v}+h\bullet\bar{w} \ \ \ \forall h,k \in K \ \ \ \text{e} \ \ \ \forall \bar{v} \in V$
    4. $1\bullet \bar{v} = \bar{v} \ \ \ \forall \bar{v} \in V$ ove 1 è l’unità del campo $K$

$V(K) = (V, K, +:V\times V\rightarrow V, \bullet:K\times V\rightarrow V)$ ⇒ struttura algebrica

Gli elementi dell’insieme $V$ sono detti **************vettori,************** gli elementi del campo $K$ sono detti ******************scalari.******************

## Vettori

I vettori sono segmenti orientati con **********************************verso, direzione********************************** e ******************lunghezza******************.

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%205.png)

## Esercizio

Sia $\R^2$ con le operazioni di somma componente per componente ⇒ $(a, b) + (c, d) = (a+c, b+d)$ e prodotto per scalare campo per campo $\alpha(a,b) = (\alpha a, \alpha b)$ è uno spazio vettoriale reale.

**SVOLGIMENTO** ⇒

1. Far vedere che $(\R^2,+)$ è un gruppo abeliano:
    1. $\forall a,b \in \R^2 : (a,b)+(0,0) = (a+0, b+0) = (a,b) = (0+a, 0+b) = (0,0)+(a,b)$
    2. $\forall a,b \in \R^2 \ \ \exists \ (-a, -b) \in \R^2:(a,b)+(-a, -b) = (a-a, b-b) = (0,0) = (-a+a, -b+b) = (-a, -b)+(a,b)$
    3. $\forall(a,b),(c,d),(e,f) \in \R^2 : (a,b)+ ((c,d)+(e,f)) = (a,b) + (c+e, d+f) = (a+ (c+e), b+ (d+f)) = ((a+c)+e, (b+d)+f) = (a+c, b+d)+(e,f)=((a,b)+(c,d))+(e,f)$
    4. $(a,b)+(c,d)=(a+c, b+d)=(c+a,d+b)=(c,d)+(a,b)$
    
    Abbiamo verificato che $(\R^2,+)$ è un gruppo abeliano.
    
    NB: abbiamo usato solamente che $\R$ è un campo ⇒ abbiamo usato solo le proprietà della somma
    
2. Ora dobbiamo verificare che il prodotto esterno soddisfi le proprietà dello spazio vettoriale:
    1. $\forall a,b,c \in \R^2 : 1\cdot(a,b)=(1\cdot a, 1\cdot b) = (a,b)$ ⇒ elemento neutro
    2. $\alpha,\beta \in \R^2 = (\alpha\beta)\cdot(a,b)=((\alpha\beta)a, (\alpha\beta)b) = (\alpha(\beta a, \alpha(\beta b) = \alpha(\beta a, \beta b) = \alpha(\beta \cdot(a,b))$ ⇒ pseudo associativa
    3. $\forall \alpha,\beta\in\R \ \ \ (a,b) \in \R^2 : (\alpha+\beta)(a,b) = ((\alpha+\beta)a, (\alpha+\beta)b)=(\alpha a+\beta a, \alpha b + \beta b) = (\alpha a, \alpha b)+(\beta a, \beta b) = \alpha(a,b) + \beta(a,b)$ ⇒ pseudo distributiva
    4. $\forall \alpha \in \R (a,b) ,(c,d) \in \R^2 : \alpha((a,b)+(c,d)) = \alpha(a+c,b+d)=(\alpha a, \alpha c, \alpha b, \alpha d)=(\alpha a, \alpha b) + (\alpha c, \alpha d) = \alpha(a,b)+\alpha(c,d)$

Valgono tutte le proprietà di spazio vettoriale.

<aside>
💡 **Osservazioni**:

1. Nel dimostrare che $\R^2$ è spazio vettoriale su $\R$ abbiamo usato solo le proprietà che $\R$ è un campo e non abbiamo nemmeno usato la proprietà commutativa del prodotto. In particolare se $\mathbb{K}$ è un campo al medesimo modo si dimostra che $\mathbb{K}^2$ è spazio vettoriale su $\mathbb{K}$.
2. Una dimostrazione analoga si può fare per far vedere che $\mathbb{K}^n$ è spazio vettoriale su $\mathbb{K}$ con somma e prodotto per scalare definiti componente per componente.
    - $(x_1,x_2,x_3)+(y_1,y_2,y_3) = (x_1+y_1, x_2+y_2, x_3+y_3)$
    - $\alpha(x_1, x_2, x_3) = (\alpha x_1, \alpha x_2, \alpha x_3)$
    In particolare $\mathbb{K}$. è anche spazio vettoriale su se stesso
    
    > **L’esempio di $\mathbb{K}$ con spazio vettoriale su $\mathbb{K}$ è fondamentale!
    (vedremo che ogni spazio vettoriale di dimensione finita è isomorfo ad un** $\mathbb{K}^n$)
    > 
</aside>

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%206.png)

### Combinazione Lineare

Siano $\bar{v_1}….\bar{v_k}\in V(\mathbb{K})$ vettori, $\alpha_1, \alpha_n$ scalari, si dice combinazione lineare di $(\bar{v_1}…\bar{v_k})$ con $\alpha_1,\alpha_k$ il vettore $\alpha_1\bar{v_1}+…+\alpha_n\bar{v_k}$.

### Applicazione Lineare

Siano $V(\mathbb{K}) \ \ \text{e}\ \ W(\mathbb{K})$ due spazi vettoriali su $\mathbb{K}$. Si dice applicazione lineare da $V(\mathbb{K}) \ \ \text{in} \ \ W(\mathbb{K})$ una funzione $f:V\rightarrow W$ tale che

$$
\forall \bar{v}, \bar{w}\in W, \forall\alpha,\beta\in\mathbb{K} \ \ \ f(\alpha\bar{w}+\beta\bar{v})=\alpha f(\bar{w})+\beta f(\bar{v})
$$

Un’applicazione lineare è una funzione che manda combinazioni lineari di vettori in combinazioni lineari con i medesimi coefficienti.

<aside>
💡 Se $V(\mathbb{K})$ è spazio vettoriale e $f:V\rightarrow W$ è applicazione lineare ⇒ $f(V)$ immagine di $V$ mediante $f$ è uno spazio vettoriale.

</aside>

## Sottospazio vettoriale

Sia $W(\mathbb{K})$ uno spazio vettoriale, sia anche $X\subseteq W$ sottoinsieme $x≠0$, allora $X$ è detto ******SOTTOSPAZIO****** di $W$ se $X$ rispetta le operazioni di somma di vettori ristretta ad $X\times X$ e troncata ad $X$ e di prodotto per scalari di $W$ ristretta a $\mathbb{K}\times X$ e troncata ad $X$ soddisfa gli assiomi di spazio vettoriale.

In tale caso scriviamo $X\leqslant W$. 

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%207.png)

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%208.png)

$X$ è sottospazio vettoriale se:

1. la somma di due qualsiasi vettori di $X$ è un vettori di $X$
2. il prodotto di un qualsiasi vettore di $X$ per uno scalare è ancora un vettore di $X$

### Teorema 1

Sia $V(\mathbb{K})$ uno spazio vettoriale su $\mathbb{K}$, allora:

1. $\forall\bar{v}\in V, \forall\alpha \in\mathbb{K} \ \ \alpha\cdot\bar{v} = \varnothing \iff \alpha = 0 \ \lor \ \bar{v}=\varnothing$
2. $\forall\bar{v}\in V = (-1)\bar{v} = -\bar{v}$

**Dimostrazione ⇒**

![Untitled](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Untitled%209.png)

### Teorema 2

$X \leq V(\mathbb{K}) \iff X \subseteq V(\mathbb{K}) \ \text{ed} \ X$ è chiuso rispetto le combinazioni lineari di suoi elementi mediante le equazioni di $V$.

In altre parole:

$$
\star) \ \ \forall \bar v, \bar w \in X \ \forall \alpha \beta\in\mathbb{K} : \alpha\bar v+\beta\bar w \in X
$$

**Osservazione**: $\star$ è equivalente a dire:

$$
\bullet) \ \forall\alpha\in\mathbb K \ \ \forall \bar v\in X:\alpha\bar v+\beta\bar w \in X \ \& \ \forall\bar v,\bar w \in X: \bar v + \bar w \in X
$$

Verifichiamo che se vale $\star$ allora $\forall \alpha\in\mathbb K, \forall\bar v ,\bar w \in X : \alpha\bar v + \underline 0 = \alpha\bar v\in X$ e $\forall \bar v,\bar w \in X: 1\cdot\bar v + 1\cdot\bar w \in X$

Viceversa se vale $\bullet$ $\implies \forall\alpha,\beta\in\mathbb K, \forall\bar v,\bar w \in X : \alpha\bar v,\beta\bar w \in X \implies \bar v’ = \alpha\bar v,\bar w = \beta \bar w \in X \ \ \ \ \bar v'+\bar w' \in X \implies \alpha\bar v+\beta\bar w \in X$

Se vale $\bullet$ o $\star$ (stessa cosa) allora $X$ è sottospazio.

Osserviamo che molte delle proprietà di spazio vettoriale valgono automaticamente per le restrizioni applicate a qualsiasi $X\subseteq V(\mathbb K)$:

1. se $\forall\bar v\in V: 1 \cdot \bar v = \bar v \implies \forall\bar v \in X: 1\cdot\bar v= \bar v$
2. se $\forall\alpha,\beta \in \mathbb K \ \forall \bar v\in V:(\alpha\beta)\bar v = \alpha(\beta\bar v)\implies$vale anche per $\forall\bar v \in X$
3. $\forall \alpha,\beta\in \mathbb K \ \forall\bar v \in V:(\alpha+\beta)\bar v=\alpha\bar v + \beta\bar v$
4. $\forall\bar v,\bar w \ \forall \alpha\in\mathbb K=\alpha(\bar v + \bar w)=\alpha\bar v+\alpha\bar w$

1, 2, 3, 4 valgono tutte anche sulla restrizione.

Vale anche sulle restrizioni che $\forall\bar u\bar v\bar w\in V:\bar u+(\bar v+ \bar w) = (\bar u+\bar v)+\bar w \implies \\ \implies \forall\bar u,\bar v,\bar w \in X: \bar u+(\bar v+\bar w)=(\bar u+\bar v)+\bar w$ e similmente:

$\forall\bar u,\bar v \in V: \bar u+\bar v=\bar v+\bar w \implies \forall \bar u,\bar v\in X:\bar u+\bar v=\bar v+\bar w$

**Cosa potrebbe non funzionare?**

1. $\underline 0 \in X$
2. $\forall \bar u,\bar v \in X:\bar u +\bar v\in X$
3. $(-\bar u)\in X \ \text{se} \ \bar u \in X$
4. $\alpha\bar u \in X \ \text{se} \ \bar u \in X \ \ \ \forall \alpha\in\mathbb K$

Se valgono a, b, c, d possiamo troncare le operazioni ad $X$ ⇒ abbiamo un sottospazio.

b+d⇒ significa che si può troncare.

a+b+c ⇒ $(X, +)$ un gruppo.

### Condizione per sottospazio

Se vale la condizione $\star$: $\forall\alpha,\beta\in\mathbb K \ \forall\bar u,\bar v\in X:\alpha\bar u+\beta\bar v\in X$

1. $0\cdot\bar u + 0\cdot\bar v = \underline 0 + \underline 0 = \underline 0\in X$
2. $1\cdot\bar u+1\cdot\bar v = \bar u+\bar v \in X$
3. $(-1)\bar u + 0 \cdot\bar v = -\bar u +\underline 0 = -\bar u \in X \ \ \forall\bar u\in X$
4. $\alpha\bar u+0\cdot\bar v=\alpha\bar u+\underline 0 = \alpha\bar u\in X \ \forall\bar u \in X$

$X$ è un sottospazio, viceversa se $X$ sottospazio allora ogni combinazione lineare di suoi vettori deve stare in $X$ ⇒ vale $\star$.

[Esempi/Esercizi](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Algebra_lineare_e_geometria_analitica_(1).pdf)

### Y, spazio e sottospazio

$$
\text{Sia} \ \ \ Y=\{(a,b)\in\R^2|b=a^2\} \ \ \ \text{con}
$$

$$
+:
\begin{cases}
Y\times Y \rightarrow Y \\
(a,a^2),(b,b^2)\rightarrow(a+b,(a+b)^2)
\end{cases}
$$

$$
\cdot:
\begin{cases}
\R\times Y\rightarrow Y \\
\alpha(a,a^2)\rightarrow(\alpha a,\alpha^2 a^2)
\end{cases}
$$

1. $Y$ è spazio vettoriale? si
2. $Y$ è sottospazio di $\R^2$? NO, le operazioni di $Y$ non sono quelle ereditate da $\R^2$

[Verifica di Y spazio vettoriale.pdf](Algebra%20Lineare%208331a6c7e8e744349d64f6ea31e4c3df/Verifica_di_Y_spazio_vettoriale.pdf)

### Regole “euristiche” per riconoscere se un sottoinsieme descritto da equazioni sia un sottospazio

# Matrici

per le matrici guarda il quaderno