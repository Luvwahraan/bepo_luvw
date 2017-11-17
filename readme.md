
# Clavier BÉPO pour l’Ergodone.

Cette keymap a été pensée pour la disposition BÉPO (http://bepo.fr), qui est une disposition de clavier francophone, ergonomique et libre, élaborée selon la méthode Dvorak.
L’adaptation de cette disposition à l’Ergodone (probablement utilisable avec l’Ergodox) a été réalisée en essayant de profiter de l’ergonomie du clavier pour conserver l’alternance des mains propre au BÉPO.
Les couches de base (BÉPO et BÉPO sur disposition AZERTY) ont été reprises de celles de la keymap BÉPO proposée par Olivier Smedts (un grand merci à lui et à ceux qui ont collaboré avec lui), fournies avec [la source de QMK](https://github.com/qmk/qmk_firmware/tree/master/layouts/community/ergodox/bepo).

Un certains nombres de fonctionnalités du firmware QMK sont utilisés dans cette keymap. Elles sont expliquées dans la section ***Particularités*** et détaillées dans la section ***Fonctions***.


## Particularités

### Layouts

L’une des principales fonctionnalités des claviers programmables est la gestions des calques, qui permet de superposer et alterner des dispositions différentes.

Les touches mod ont été séparées en calques pour plus de souplesse, et proposées associées aux couches de bases.
Les couches de bases proposées sont donc en fait deux calques : **BÉPO** + **MODA** ou **AZER** + **MODA** par exemple.

Le calque par défaut est un calque Modificateurs (**MODA**). Il n’est donc pas possible d’écrire avec, mais un appuis sur n’importe quelle touche alpha initialise la macro gérant les associations de calques, passant la disposition en BÉPO.

### Modificateurs

Les modificateurs sont placés symétriquement sur les pouces, de manière à les combiner facilement sans léser l’alternance des mains.

La plupart d’entre eux sont combinés avec Mod Tap.
Cette fonction du firmware QMK permet d’avoir deux fonctions sur une seule touche mod. : une lorsqu’on la garde appuyée (la modification) et une lorsqu’elle est pressée et relachée normalement.

### LEAD

La touche *LEAD*, une autre fonctionnalité apportée par QMK, est également employée pour accéder à des macros ou des codes spéciaux. Pour en activer une, il est nécessaire de taper la touche LEAD, puis un ordre spécifique de codes sur n’importe quelle couche.

Par exemple ici `LEAD`→`L`→`O`→`L` passe le layer **LOCK** en seul actif (ce qui ne laisse que la possibilité d’enlever ce layer via la même fonction).

### Mirroirs

Une fonction mirroir BÉPO est disponible via une fonction *LEAD*.

Elle a pour effet de placer un calque de la disposition inversée (le `E` devient `T`, le `L` devient `É`, etc), et est activable/désactivable en alternant auriculaire et index, via *LEAD* puis `TAB` ou `Z`.

### Tap Dance

La touche verr.maj n’étant pas placé, elle est accessibles grace la fonctionnalité Tap Dance, en pressant deux fois une des touches *SHIFT*.

En pressant plusieurs fois la touche `P`, on peut générer des caractères aléatoires.

Les raccourcis de `F1` à `F10` sont accessibles en tapant plusieurs fois les touches `"` à `)` sur la première ligne. Par exemple `(`→`(`→`(` ferme la fenêtre en cours, en envoyant la séquence `ALT+F4`.


### Bureaux virtuels

Des fonctions rapides ont été ajoutées pour naviguer dans les bureaux virtuels de X.org (ce sont des appuis simultanés sur `LCTRL`, `ALT` et une flèche) :
* `L_D` : vers l’espace de travail de gauche
* `R_D` : vers l’espace de travail de droit
* `U_D` : vers l’espace de travail du haut
* `D_D` : vers l’espace de travail du bas.

### Fonctions

Comme dans la version originale, une couche est utilisée pour les touches de fonctions (`F1-12` et plus). C’est sur cette couche qu’on peut gérer les couches, avec les pouces.

Une deuxième couche fonction qui ne remplace que la première ligne est disponible et bloquable (couche **FLOK**).

### Pavé numérique

Le pavé numérique main droite (couche **NUMK**) est décalé par rapport à la version d’origine, de manière à placer l’index sur la touche `T` (`J` en AZERTY), soit la touche avec un marquage sensitif sur la plupart des claviers.

Les claviers numériques standards ont le marquage sur le majeur, mais décaler plus encore aurait remplacé certains modificateurs, rendant l’utilisation à deux mains déstabilisante.

### Jeu

Les modificateurs complexes et autres touches spéciales peuvent rendre les choses compliquées pour les joueurs (par exemple dans Minecraft la touche `É` permet bien d’avancer, mais le personnage ne peut plus s’arrêter).

Une couche (incomplète pour le moment) modifiants les touches ayants plusieurs fonctions ou certains caractères mal pris en charge par des jeux est donc disponible (couche **PLAY**), et plusieurs macros permettent de les activer avec différentes dispositions :
* BÉPO + **PLAY**
* BÉPO + **PLAY** + **NUMK**
* AZERTY + **PLAY**
* AZERTY + **PLAY** + **NUMK**

### Macros

Deux macros fonctionnants ensembles sont utilisées avec cette keymap : la première permet de changer le set de calques, et la deuxième de naviguer dans les sets de base.
Elles sont utilisables via les pouces sur la couche **FNCT**, elle-même activable en maintenant une des touches espace.

## Fonctions

### Mod Tap

Pressée         | Tapée
----------------|----------
`Ctrl + Alt`    | `Home`
`LSuper`        | `Play/Pause`
`AltGr + Shift` | `End`
`LCtrl`         | `Enter`
`LAlt`          | `Enter`
`RCtrl`         | `Enter`
`AltGr`         | `Enter`
`LShift`        | `CapsLock`
`RShift`        | `CapsLock`


### Lead

 Touche 1 | touche 2 | touche 3 | touche 4 |Fonctionnalité
----------|----------|----------|----------|---------------
`$` | | | | Escape key
`N` | | | | Couche pavé numérique (**NUMK**).
`Space` | `Space` | | | FN lock
`L` | `O` | `L` | | Keyboard lock/unlock
`P` | `O` | `W` | `A` | Sys power
`Tab` | `LEAD` | | | Toggle BÉPO mirroir
`Z` | `LEAD` | | | Toggle BÉPO mirroir

### Tap dance

Touche    | tap1     | tap2     | tap3       | tap4           | tap5
----------|----------|----------|------------|----------------|-------
 `LSHIFT` | `LSHIFT` | `LSHIFT` | `CAPSLOCK` |                |
 `RSHIFT` | `RSHIFT` | `RSHIFT` | `CAPSLOCK` |                |
 `P`      | `P`      |5x random | 8x random  | 12x random     | 15x random
 `"`      | `"`      | `F1`     | `ALT+F1`   | `CTRL+ALT+F1`  |
 `«`      | `«`      | `F2`     | `ALT+F2`   | `CTRL+ALT+F2`  |
 `»`      | `»`      | `F3`     | `ALT+F3`   | `CTRL+ALT+F3`  |
 `(`      | `(`      | `F4`     | `ALT+F4`   | `CTRL+ALT+F4`  |
 `)`      | `)`      | `F5`     | `ALT+F5`   | `CTRL+ALT+F5`  |
 `@`      | `@`      | `F6`     | `ALT+F6`   | `CTRL+ALT+F6`  |
 `+`      | `+`      | `F7`     | `ALT+F7`   | `CTRL+ALT+F7`  |
 `-`      | `-`      | `F8`     | `ALT+F8`   | `CTRL+ALT+F8`  |
 `/`      | `/`      | `F9`     | `ALT+F9`   | `CTRL+ALT+F9`  |
 `*`      | `*`      | `F10`    | `ALT+F10`  | `CTRL+ALT+F10` |

# Crédits

> [Luvwahraan](https://github.com/Luvwahraan) <Luvwahraan+ErgoBepo@Pikaed.Org>

