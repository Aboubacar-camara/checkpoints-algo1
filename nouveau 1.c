// Définir trois variables pour les compteurs
let longuerPhrase = 0; // Compteur de longueur de phrase
let nbreMots = 0; // Compteur de mots
let nbreVoyelles = 0; // Compteur de voyelles

// Commencer la lecture caractère par caractère
// Tant que le dernier caractère ne pas atteint
while (let i = 0; i < phrase.length - 1; i++) {
  let currentCharacter = phrase[i];

  // Incrémenter le compteur de longueur de phrase longuer
    Phrase++;

  // Si le caractère courant est un espace, incrémenter le compteur de mots
  if (currentCharacter == ' ') {
    nbreMots++;
  }

  // Si le caractère courant est une voyelle, alors incrémenter le compteur de voyelles
  if (currentCharacter == 'a' || currentCharacter == 'e'|| currentCharacter == 'i' || currentCharacter == 'o'|| currentCharacter == 'u' || currentCharacter == 'y') {
    nbreVoyelles++;
  }
}

// Afficher le résultat final
console.log('Longueur de phrase : ' + longuerPhrase);
console.log('Nombre de mots : ' + nbreMots);
console.log('Nombre de voyelles : ' + nbreVoyelles);
