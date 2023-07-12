// Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.
// If you want to know more: http://en.wikipedia.org/wiki/DNA
// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".
// Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side.
// DNA strand is never empty or there is no DNA at all (again, except for Haskell).
// More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

// Example: (input --> output)
// "ATTGC" --> "TAACG"
// "GTAT" --> "CATA"

#include <string>

std::string DNAStrand(const std::string& dna)
{
  //your code here
  std::string dna_side = dna;
  for (int i  = 0; dna_side[i] != '\0'; i++)
  {
    if (dna_side[i] == 'A')
      dna_side[i] = 'T';
    else if (dna_side[i] == 'T')
      dna_side[i] = 'A';
    else if (dna_side[i] == 'C')
      dna_side[i] = 'G';
    else if (dna_side[i] == 'G')
      dna_side[i] = 'C';
  }
  return (dna_side);
}