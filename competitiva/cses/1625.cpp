#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definir las direcciones posibles
const int dx[] = {1, -1, 0, 0}; // R, L, U, D
const int dy[] = {0, 0, -1, 1}; // R, L, U, D

// Función recursiva para contar el número de caminos
int countPaths(int x, int y, int step, const string &path, vector<vector<vector<int>>> &dp)
{
  // Si hemos alcanzado el final (48 pasos) y estamos en la casilla (7, 0)
  if (step == 48)
  {
    return (x == 6 && y == 6) ? 1 : 0;
  }

  // Si ya hemos calculado esta sub-problemática, devolver el resultado memoizado
  if (dp[step][x][y] != -1)
  {
    return dp[step][x][y];
  }

  int result = 0;

  // Si el carácter en el paso actual es '?', podemos mover en cualquier dirección
  if (path[step] == '?')
  {
    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      // Verificar si la nueva casilla está dentro de los límites
      if (nx >= 0 && nx <= 6 && ny >= 0 && ny <= 6)
      {
        result += countPaths(nx, ny, step + 1, path, dp);
      }
    }
  }
  // Si el carácter es una dirección fija, seguir esa dirección
  else
  {
    int nx = x + dx[path[step] == 'R' ? 0 : (path[step] == 'L' ? 1 : (path[step] == 'U' ? 2 : 3))];
    int ny = y + dy[path[step] == 'R' ? 0 : (path[step] == 'L' ? 1 : (path[step] == 'U' ? 2 : 3))];
    // Verificar si la nueva casilla está dentro de los límites
    if (nx >= 0 && nx <= 6 && ny >= 0 && ny <= 6)
    {
      result += countPaths(nx, ny, step + 1, path, dp);
    }
  }

  // Memorizar el resultado para esta sub-problemática
  dp[step][x][y] = result;

  return result;
}

int main()
{
  // Leer la entrada
  string path;
  cin >> path;

  // Crear la estructura de DP para memorizar los resultados
  vector<vector<vector<int>>> dp(48, vector<vector<int>>(8, vector<int>(8, -1)));

  // Llamar a la función recursiva comenzando en (0, 0) y en el paso 0
  int result = countPaths(0, 0, 0, path, dp);

  // Imprimir el resultado
  cout << result << endl;

  return 0;
}
