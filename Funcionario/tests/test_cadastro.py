import subprocess
import unittest
from pathlib import Path

EXEC = Path(__file__).resolve().parents[1] / 'sistema_funcionarios'

class CadastroTest(unittest.TestCase):
    def test_complete_registration(self):
        data = '\n'.join(['1\n1\nDev Exemplo\n2000\n3', '2\n2\nGerente Exemplo\n2000\n800',
                          '3\n3\nEstagiário Exemplo\n2000\n80'] * 2) + '\n'
        result = subprocess.run([str(EXEC)], input=data, text=True, capture_output=True, timeout=5)
        self.assertEqual(result.returncode, 0)
        for salary in ['3500', '2800', '1000']:
            self.assertEqual(result.stdout.count('Salário final: ' + salary), 2)

    def test_invalid_inputs(self):
        for data in ['', 'x\n', '9\n', '1\n1\nNome\n-1\n', '1\n1\nNome\n2000\n-1\n']:
            result = subprocess.run([str(EXEC)], input=data, text=True, capture_output=True, timeout=5)
            self.assertEqual(result.returncode, 1)
            self.assertTrue(result.stderr)

if __name__ == '__main__':
    unittest.main()
