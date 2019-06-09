
# Clavier BÉPO pour l’Ergodone.

Cette keymap a été pensée pour la disposition BÉPO (http://bepo.fr), qui est une disposition de clavier francophone, ergonomique et libre, élaborée selon la méthode Dvorak.

L’adaptation de cette disposition à l’Ergodone (probablement utilisable avec l’Ergodox) a été réalisée en essayant de profiter de l’ergonomie du clavier pour conserver l’alternance des mains propre au BÉPO.

Les couches de base (BÉPO et BÉPO sur disposition AZERTY) ont été reprises de celles de la keymap BÉPO proposée par Olivier Smedts (un grand merci à lui et à ceux qui ont collaboré avec lui), fournies avec [la source de QMK](https://github.com/qmk/qmk_firmware/tree/master/layouts/community/ergodox/bepo).

Un certains nombre de fonctionnalités du firmware QMK sont utilisées dans cette keymap. Elles sont expliquées dans la section ***Particularités*** et détaillées dans la section ***Fonctions***.


## Particularités

### Layouts

L’une des principales fonctionnalités des claviers programmables est la gestion des calques, qui permet de superposer et alterner des dispositions différentes sans modifier celle du système.

Les touches mod ont été séparées en calques pour plus de souplesse, et proposées associées aux couches de bases.
Les couches de bases proposées sont donc composées de deux calques pour être utilisables (**BÉPO** + **MODA** par exemple).

Le calque par défaut (celui avec l’id 0) est un calque modificateurs (**MODA**). Il n’est donc pas possible d’écrire avec, mais un appui sur n’importe quelle touche alpha initialise la macro gérant les associations de calques, passant la disposition en BÉPO.

### Modificateurs

Les modificateurs sont placés symétriquement sur les pouces, de manière à les combiner facilement sans léser l’alternance des mains.

La plupart d’entre eux sont combinés avec Mod Tap ou Tap Dance.
La fonctionnalité Mod Tap du firmware QMK permet d’avoir deux fonctions sur une seule touche mod. : une lorsqu’on la garde appuyée (la modification) et une lorsqu’elle est pressée et relachée normalement.

### Tap Dance

Cette fonctionnalité permet de gérer finement les répétitions de touches.

Les raccourcis de `F1` à `F10` sont accessibles en tapant plusieurs fois les touches `"` à `)` sur la première ligne. Par exemple `(`→`(`→`(` ferme la fenêtre en cours, en envoyant la séquence `ALT+F4`.

Certains modificateurs s’utilisent également en les tapants plusieurs fois.

### Bureaux virtuels

Des fonctions rapides ont été ajoutées pour naviguer dans les bureaux virtuels de X.org (ce sont des appuis simultanés sur `LCTRL`, `ALT` et une flèche) :
* `L_D` : vers l’espace de travail de gauche
* `R_D` : vers l’espace de travail de droit
* `U_D` : vers l’espace de travail du haut
* `D_D` : vers l’espace de travail du bas.

## Fonctions

### Mod Tap

Pressée         | Tapée
----------------|----------
`Ctrl + Alt`    | `Home`
`AltGr + Shift` | `End`
`LAlt`          | `Enter`
`AltGr`         | `Enter`
`LShift`        | `CapsLock`
`RShift`        | `CapsLock`

### Tap dance

Les touches Tap Dance peuvent être tapées relachées, ou tapées et relachées plusieurs fois et maintenues.

#### Tapées

Touche    | tap1     | tap2     | tap3       | tap4           | tap5
----------|----------|----------|------------|----------------|-------
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
 `CTRL`   | `CTRL`   | `ALT`    | `CTRL+ALT` |                |

##### Tapées et/ou maintenuer

##### L et R Super/GUI avec les mêmes actions.

nb tap | Tenue          | Relachées
-------|----------------|---------------
 1     | KC_LGUI        | KC_RGUI
 2     | Affichage FNCT | LALT + LSHIFT


# Crédits

> [Luvwahraan](https://github.com/Luvwahraan) <Luvwahraan+ErgoBepo@Pikaed.Org>

