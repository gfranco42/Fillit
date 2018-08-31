/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EXPLICATIONS.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:00:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/31 15:50:30 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

EXPLICATIONS DES DIFFERENTES FONCTIONS:

////////////////
// ft_check.c //
////////////////

Permet de verifier si le fichier est compose d'un ou de plusieurs "blocs", 
chacun constitue :

1) De 4 hashes ('#') ni plus ni moins;
2) De 4 lignes ('\n') ni plus ni moins;
3) De 1 separation ('\n') entre chaque bloc;
4) De 12 points ('.') ni plus ni moins;
5) De points ('.'), de hashes ('#'), et de retour a la ligne ('\n') 
   et rien d'autre;

	return (0) si tout est bon, sinon return une autre valeur;

/////////////////////
// ft_counttetri.c //
/////////////////////

Permet de compter combien de "blocs" il y a dans le fichier;
Le calcul se fait par multiple de 21;

	return le nombre de "blocs" ou 0 s'il y a une erreur dans le fichier;

////////////////
// ft_error.c //
////////////////

Est appellee dans plusieurs fonctions pour afficher un message d'erreur;

Aucune valeur de retour, exit(EXIT_FAILURE), s'il l'une des conditions
d'erreur est remplie.

///////////////////
// ft_file_cpy.c //
///////////////////

Recupere le contenu du fichier sous forme d'une chaine de caracteres:

1) Open(file);
2) Read(file);
3) Ouvre un tableau de char;
4) Copy le contenu dans le tableau;
5) Close(file);

	return (string) qui contient le fichier;

/////////////////////
// ft_file_split.c //
/////////////////////

Permet de creer un tableau contenant dans chaque case un "bloc" de tetri:

1)Check si fichier est bon;
2)Cree un tableau de tableaux ou chaque tableau contiendra 21 characteres
3)Copy chaque bloc dans chaque tableau;

	return (array) qui contient chaque bloc de tetri;

/////////////////
// ft_prtcpy.c //
/////////////////

Permet de copier chaque "bloc" de tetri dans un tableau de la bonne taille;
Cette fonction, en etant appellee en boucle (while()), permet de copier
en gardant la position de l'index en memoire;

	return (str) qui contient un "bloc" de tetri;

//////////////////
// ft_is_near.c //
//////////////////

Permet de verifier:

1)Si les hashes ('#') forment bien une piece de tetri;
2)Si les blocs de tetri ont bien 4 lignes de 4 colonnes;

	return (0) si tout est bon sinon return une autre valeur;

//////////
// text //
//////////

Ce fichier contient les "blocs" de tetri.
C'est le fichier de test ==> ./fillit text ;


NOTE :
1/ FONCTION augmentation map (cf. exemple carre et L)
2/ FONCTION deplacement piece (presque fini)
3/ FONCTION recupere taille map
4/ FONCTION pour overlap
