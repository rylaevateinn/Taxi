// Nama : Khafidz Nurhidayah (Apit Veryo Aryanto)
// materi dan tugas pertama


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
	static void Main(string[] args)
	{
		Taxi taxi = new Taxi();

		taxi.DriverName = "Jono";
		taxi.OnDuty = true;
		taxi.NumPassenger = 10;

		taxi.TaxiInfo();
		taxi.PickUpPassenger();
		taxi.DropOffPassenger();

		Console.ReadKey();
	}
}