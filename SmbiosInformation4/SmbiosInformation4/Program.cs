using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SmbiosInformation4
{
    class Program
    {
        static public void Main()
        {
            var serialNumber = Windows.System.Profile.SystemManufacturers.
                               SmbiosInformation.SerialNumber;
            System.Console.WriteLine($"Serial number = {serialNumber}");
        }
    }
}
