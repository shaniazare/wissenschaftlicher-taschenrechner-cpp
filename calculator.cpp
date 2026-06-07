#include <limits>
#include <iostream>
#include <cmath>
#include <fstream>

//offen die Datei ergebnis.txt zum Schreiben
std::ofstream datei("ergebnis.txt", std::ios::app); // Datei wird erstellt

// Mathematische Grundrechenarten und Funktionen
void addition()
{
    double a, b;// Variablen für die Eingabe
    std::cout << "Erste Zahl: ";// Eingabeaufforderung für die erste Zahl
    std::cin >> a;// Eingabe der ersten Zahl
    std::cout << "Zweite Zahl: ";// Eingabeaufforderung für die zweite Zahl
    std::cin >> b;// Eingabe der zweiten Zahl
   
    double ergebnis = a + b;// Berechnung der Summe
    std::cout << "Die Summe ist: " << ergebnis << std::endl;// Ausgabe der Summe
    datei << "Die Summe ist: " << ergebnis << std::endl;// Ausgabe in die Datei
}
void subtraktion()
{
    double a, b;//
    std::cout << "Erste Zahl : ";
    std::cin >> a;
    std::cout << "Zweite Zahl : ";
    std::cin >> b;
    double ergebnis = a - b;// Berechnung der Differenz
    std::cout << "Die Differenz ist: " << ergebnis << std::endl;// Ausgabe der Differenz
    datei << "Die Differenz ist: " << ergebnis << std::endl;// Ausgabe in die Datei
}
void multiplikation()
{
    double a, b;
    std::cout << "Erste Zahl:";
    std::cin >> a;
    std::cout << "Zweite Zahl :";
    std::cin >> b;
    double ergebnis = a * b;// Berechnung des Produkts
    std::cout << "Das Produkt ist: " << ergebnis << std::endl;// Ausgabe des Produkts
    datei << "Das Produkt ist: " << ergebnis << std::endl;// Ausgabe in die Datei
}
void division()
{
    double a, b;
    std::cout << "Erste Zahl: ";
    std::cin >> a;
    std::cout << "Zweite Zahl : ";
    std::cin >> b;
    if (b != 0)// Überprüfung auf Division durch Null
    {
        double ergebnis = a / b;// Berechnung des Quotienten
        std::cout << "Der Quotient ist: " << ergebnis << std::endl;
        datei << "Der Quotient ist: " << ergebnis << std::endl;
    }
    else// Wenn b gleich 0 ist, wird eine Fehlermeldung ausgegeben
    {
        std::cout << "FEHLER: Division durch Null ist nicht moeglich!" << std::endl;// Ausgabe der Fehlermeldung
        datei << "FEHLER: Division durch Null ist nicht moeglich!" << std::endl;
    }
}
void potenz()
{
    double a, b;
    std::cout << "Basis : ";
    std::cin >> a;
    std::cout << "Exponent : ";
    std::cin >> b;
    double ergebnis = std::pow(a, b);// Berechnung der Potenz
    std::cout << "Die Potenz ist: " << ergebnis << std::endl;
    datei << "Die Potenz ist: " << ergebnis << std::endl;
}
void wurzel()
{
    double x;
    std::cout << "Zahl eingeben: ";
    std::cin >> x;
    if (x >= 0)// Überprüfung auf negative Zahl
    {
        double ergebnis = std::sqrt(x);// Berechnung der Quadratwurzel
        std::cout << "Wurzel = " << ergebnis << std::endl;
        datei << "Wurzel = " << ergebnis << std::endl;
    }
    else// Wenn x negativ ist, wird eine Fehlermeldung ausgegeben
    {
        std::cout << "FEHLER: Wurzel aus einer negativen Zahl ist nicht definiert!" << std::endl;
        datei << "FEHLER: Wurzel aus einer negativen Zahl ist nicht definiert!" << std::endl;
    }
}
void sinusRechnung()
{
    double x;
    std::cout << "Winkel in Radiant eingeben: ";// Eingabeaufforderung für den Winkel in Radiant
    std::cin >> x;
    double ergebnis = std::sin(x);// Berechnung des Sinus
    std::cout << "Sinus = " << ergebnis << std::endl;
    datei << "sin = " << ergebnis << std::endl;
}
void cosinusRechnung()
{
    double x;
    std::cout << "Winkel in Radiant eingeben: ";
    std::cin >> x;
    double ergebnis = std::cos(x);// Berechnung des Cosinus
    std::cout << "Cosinus = " << ergebnis << std::endl;
    datei << "cos = " << ergebnis << std::endl;
}
void tangensRechnung()
{
    double x;
    std::cout << "Winkel in Radiant eingeben: ";
    std::cin >> x;
    double ergebnis = std::tan(x);// Berechnung des Tangens
    std::cout << "Tangens = " << ergebnis << std::endl;
    datei << "tan = " << ergebnis << std::endl;
}
void logarithmenRechnung()
{
    double x;
    std::cout << "Zahl eingeben: ";
    std::cin >> x;// Eingabe der Zahl
    if (x > 0)// Überprüfung auf positive Zahl
    {
        double ergebnis = std::log(x);// Berechnung des natürlichen Logarithmus
        std::cout << "Logarithmus = " << ergebnis << std::endl;
        datei << "Logarithmus = " << ergebnis << std::endl;
    }
    else// Wenn x kleiner oder gleich 0 ist, wird eine Fehlermeldung ausgegeben
    {
        std::cout << "FEHLER: Logarithmus ist nur fuer positive Zahlen definiert!" << std::endl;
        datei << "FEHLER: Logarithmus ist nur fuer positive Zahlen definiert!" << std::endl;
    }
}
void betrag()
{
    double x;
    std::cout << "Zahl eingeben: ";
    std::cin >> x;
    double ergebnis = std::abs(x);// Berechnung des Betrags
    std::cout << "Betrag = " << ergebnis << std::endl;
    datei << "Betrag = " << ergebnis << std::endl;
}
void fakultät()
{
    int n;// Variable für die Eingabe
    std::cout << "Ganzzahl (>= 0) eingeben: ";
    std::cin >> n;
    if (n < 0)// Überprüfung auf negative Zahl
    {
        std::cout << "FEHLER: Fakultaet ist nur für nicht-negative ganze Zahlen definiert!" << std::endl;// Ausgabe der Fehlermeldung
        datei << "FEHLER: Fakultaet ist nur für nicht-negative ganze Zahlen definiert!" << std::endl;
        return;
    }
    int f = 1;// Initialisierung der Fakultätsvariable
    for (int i = 1; i <= n; i++)// Berechnung der Fakultät
        f *= i;// Multiplikation der Fakultätsvariable mit i
    std::cout << "Fakultät = " << f << std::endl;
    datei << "Fakultät = " << f << std::endl;
}

int main()// Hauptfunktion
{
    std::cout << "Willkommen zu meinem Taschenrechner!" << std::endl;// Begrüßung
    std::cout << "----------------------------------------" << std::endl;// Trennlinie

    int auswahl;// Variable für die Auswahl der Funktion
    char nochmal = 'j';// Variable für die Wiederholung der Berechnung
    while (nochmal == 'j' || nochmal == 'J')//// Schleife für die Wiederholung der Berechnung
    {
        //Gültige Eingabe 
        bool gueltigEingabe = false;// Variable für die Überprüfung der Eingabe
        while (!gueltigEingabe)//// Schleife für die Eingabeüberprüfung
        {
            std::cout << "Waehlen Sie eine Funktion:\n"// Eingabeaufforderung für die Funktionsauswahl
                      << "1. Addition\n"
                      << "2. Subtraktion\n"
                      << "3. Multiplikation\n"
                      << "4. Division\n"
                      << "5. Potenz\n"
                      << "6. Wurzel\n"
                      << "7. Sinus\n"
                      << "8. Cosinus\n"
                      << "9. Tangens\n"
                      << "10.Logarithmus\n"
                      << "11.Betrag\n"
                      << "12.Fakultaet" << std::endl;
            std::cin >> auswahl;

            if (std::cin.fail() || auswahl < 1 || auswahl > 12)//Überprüfung auf ungültige Eingabe
            {
                std::cout << "Ungueltige Auswahl. Bitte geben Sie eine Zahl zwischen 1 und 12 ein." << std::endl;// Ausgabe der Fehlermeldung
                std::cin.clear(); // Eingabe zurücksetzen-RESET
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Kein Ungültiger Eingabewert mehr
            }
            else// Wenn die Eingabe gültig ist, wird die Schleife verlassen
            {
                gueltigEingabe = true; // Eingabe ist gültig
            }
        }

        switch (auswahl)//// Auswahl der Funktion basierend auf der Benutzereingabe
        {
        case 1: addition(); break;
        case 2: subtraktion(); break;
        case 3: multiplikation(); break;
        case 4: division(); break;
        case 5: potenz(); break;
        case 6: wurzel(); break;
        case 7: sinusRechnung(); break;
        case 8: cosinusRechnung(); break;
        case 9: tangensRechnung(); break;
        case 10: logarithmenRechnung(); break;
        case 11: betrag(); break;
        case 12: fakultät(); break;
        default:// Wenn die Auswahl ungültig ist, wird eine Fehlermeldung ausgegeben
            std::cout << "Ungueltige Auswahl" << std::endl;// Ausgabe der Fehlermeldung
            datei << "Ungueltige Auswahl" << std::endl;// Ausgabe in die Datei
            break;// Beenden des Switch-Blocks
        }

        std::cout << "Moechten Sie eine weitere Berechnung durchfuehren? (j/n): ";// Eingabeaufforderung für die Wiederholung der Berechnung
        std::cin >> nochmal;// Eingabe der Wiederholungsoption
    }

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Vielen Dank, dass Sie meinen Taschenrechner benutzt haben^^!" << std::endl;// Abschlussnachricht
    std::cout << "----------------------------------------" << std::endl;
    datei.close();// Schließen der Datei
    return 0;// Rückgabe 0 für den erfolgreichen Abschluss des Programms
}
