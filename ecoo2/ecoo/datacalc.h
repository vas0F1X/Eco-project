#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <iostream>

namespace ecoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для datacalc
	/// </summary>
	public ref class datacalc : public System::Windows::Forms::Form
	{
	public:
		datacalc(void)
		{
			InitializeComponent();
			ExtractValuesFromFile(); // Добавляем вызов функции для извлечения значений из файла
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~datacalc()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ wastebox;
	private: System::Windows::Forms::TextBox^ trips111box;
	private: System::Windows::Forms::TextBox^ Emissionsbox;
	private: System::Windows::Forms::TextBox^ warmUpConsumptionbox;
	private: System::Windows::Forms::TextBox^ workConsumptionTotalbox;
	private: System::Windows::Forms::TextBox^ summabox;
	private: System::Windows::Forms::Label^ label7;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->wastebox = (gcnew System::Windows::Forms::TextBox());
			this->trips111box = (gcnew System::Windows::Forms::TextBox());
			this->Emissionsbox = (gcnew System::Windows::Forms::TextBox());
			this->warmUpConsumptionbox = (gcnew System::Windows::Forms::TextBox());
			this->workConsumptionTotalbox = (gcnew System::Windows::Forms::TextBox());
			this->summabox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(296, 311);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &datacalc::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Количество отходов ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Количество отходов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 95);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Пробег СО2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 145);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Выброс СО2 при прогреве муосровза";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 194);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Выброс СО2 при работе оборудования";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 246);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(238, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Общее количесто выбросов СО2 мусоровоза";
			// 
			// wastebox
			// 
			this->wastebox->Location = System::Drawing::Point(7, 24);
			this->wastebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->wastebox->Name = L"wastebox";
			this->wastebox->Size = System::Drawing::Size(107, 20);
			this->wastebox->TabIndex = 10;
			// 
			// trips111box
			// 
			this->trips111box->Location = System::Drawing::Point(9, 75);
			this->trips111box->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->trips111box->Name = L"trips111box";
			this->trips111box->Size = System::Drawing::Size(107, 20);
			this->trips111box->TabIndex = 11;
			// 
			// Emissionsbox
			// 
			this->Emissionsbox->Location = System::Drawing::Point(7, 110);
			this->Emissionsbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Emissionsbox->Name = L"Emissionsbox";
			this->Emissionsbox->Size = System::Drawing::Size(107, 20);
			this->Emissionsbox->TabIndex = 12;
			// 
			// warmUpConsumptionbox
			// 
			this->warmUpConsumptionbox->Location = System::Drawing::Point(7, 160);
			this->warmUpConsumptionbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->warmUpConsumptionbox->Name = L"warmUpConsumptionbox";
			this->warmUpConsumptionbox->Size = System::Drawing::Size(107, 20);
			this->warmUpConsumptionbox->TabIndex = 13;
			// 
			// workConsumptionTotalbox
			// 
			this->workConsumptionTotalbox->Location = System::Drawing::Point(7, 210);
			this->workConsumptionTotalbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->workConsumptionTotalbox->Name = L"workConsumptionTotalbox";
			this->workConsumptionTotalbox->Size = System::Drawing::Size(107, 20);
			this->workConsumptionTotalbox->TabIndex = 14;
			// 
			// summabox
			// 
			this->summabox->Location = System::Drawing::Point(7, 262);
			this->summabox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->summabox->Name = L"summabox";
			this->summabox->Size = System::Drawing::Size(107, 20);
			this->summabox->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(197, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &datacalc::label7_Click);
			// 
			// datacalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 409);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->summabox);
			this->Controls->Add(this->workConsumptionTotalbox);
			this->Controls->Add(this->warmUpConsumptionbox);
			this->Controls->Add(this->Emissionsbox);
			this->Controls->Add(this->trips111box);
			this->Controls->Add(this->wastebox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"datacalc";
			this->Text = L"datacalc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void ExtractValuesFromFile() {
			float RouteLength, workTime, TotalWaste, Emissions, idleConsumption, workConsumption, warmUpConsumption, summa;
			std::string filename = "data.txt";
			std::ifstream file(filename);

			if (!file.is_open()) {
				MessageBox::Show("Не удалось открыть файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			std::vector<std::string> lines;
			std::string line;

			while (std::getline(file, line)) {
				lines.push_back(line);
			}

			file.close();

			if (lines.size() < 9) {
				MessageBox::Show("Файл содержит менее 9 строк", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			std::vector<std::string> last9Lines(lines.end() - 10, lines.end());

			std::vector<double> values;

			for (const auto& str : last9Lines) {
				size_t pos = str.find(":");
				if (pos != std::string::npos) {
					std::string numberStr = str.substr(pos + 1);
					try {
						double number = std::stod(numberStr);
						values.push_back(number);
					}
					catch (const std::invalid_argument& e) {
						return;
					}
				}
			}
			int truckCapacity = values[0];
			int WasteTruckConsumption = values[1];
			float CO2Coefficient;
			float FuelDensity;
			int idleFuel = values[2];
			int workFuel = values[3];
			int warmUpTime = values[4];
			float truck_fuel_energy;
			int population = values[5];
			float accumulationNorm;
			float additionalPercentage;
			float lenth = values[6];

			for (int i = 0; i < 9; ++i) {
				switch (i) {
				case 5:
					if (last9Lines[5] == "А-76") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.715;
						truck_fuel_energy = 33.5;
					}
					if (last9Lines[5] == "АИ-92") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.735;
						truck_fuel_energy = 33.5;
					}
					if (last9Lines[5] == "АИ-95") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.745;
						truck_fuel_energy = 33.5;
					}
					if (last9Lines[5] == "АИ-98") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.765;
						truck_fuel_energy = 33.5;
					}
					if (last9Lines[5] == "Зимний Дизель") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.84;
						truck_fuel_energy = 43;
					}
					if (last9Lines[5] == "Летний Дизель") {
						CO2Coefficient = 3.149;
						FuelDensity = 0.86;
						truck_fuel_energy = 43;
					}
					if (last9Lines[5] == "СПГ") {
						CO2Coefficient = 2.71;
						FuelDensity = 0.424;
						truck_fuel_energy = 27;
					}
					if (last9Lines[5] == "Пропан") {
						CO2Coefficient = 2.903;
						FuelDensity = 0.528;
						truck_fuel_energy = 27;
					}
					break;
				case 7:
					if (last9Lines[7] == "Отредактировать норматив накопления твердых коммунальных отходов") {
						std::cin >> accumulationNorm;
					}
					if (last9Lines[7] == "Подтвердить норму накопления твердых коммунальных отходов(0.16051)") {
						accumulationNorm = 0.16051;
					}
					break;
				case 8:
					if (last9Lines[5] == "Город") {
						additionalPercentage = 0.5;
					}
					if (last9Lines[5] == "Пгт") {
						additionalPercentage = 0.3;
					}
					break;
				}
			}

			float waste = (population * accumulationNorm) + (population * accumulationNorm * additionalPercentage);
			//cout << "Количество образованных отходов (тонн): " << waste << endl;

			float waste2 = waste * 1000;
			float trips = waste2 / truckCapacity;
			long trips111 = round(trips); // Используем std::round для округления
			//cout << "Количество маршрутов: " << trips111 << endl;
			TotalWaste = trips * lenth;

			Emissions = WasteTruckConsumption * FuelDensity * CO2Coefficient * TotalWaste / 100;
			//cout << "CО2 пробег (кг): " << Emissions << endl;

			idleConsumption = idleFuel * (warmUpTime / 60) * FuelDensity;
			workConsumption = workFuel * (workTime / 60) * FuelDensity;
			warmUpConsumption = CO2Coefficient * idleConsumption;
			float workConsumptionTotal = CO2Coefficient * workConsumption;
			summa = warmUpConsumption + workConsumptionTotal + Emissions;

			//cout << "Выброс CО2 при прогреве мусоровоза (тонн): " << warmUpConsumption << endl;
			//cout << "Выброс CO2 при работе оборудования (тонн): " << workConsumptionTotal << endl;
			//cout << "Объем выбросов CO2 суммарно (тонн): " << summa << endl;

			this->wastebox->Text = gcnew String(std::to_string(waste).c_str());
			this->trips111box->Text = gcnew String(std::to_string(trips111).c_str());
			this->Emissionsbox->Text = gcnew String(std::to_string(Emissions).c_str());
			this->warmUpConsumptionbox->Text = gcnew String(std::to_string(warmUpConsumption).c_str());
			this->workConsumptionTotalbox->Text = gcnew String(std::to_string(workConsumptionTotal).c_str());
			this->summabox->Text = gcnew String(std::to_string(summa).c_str());
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		datacalc::Hide();
	}

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}