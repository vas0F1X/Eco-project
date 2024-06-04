#pragma once
#include "ResultForm.h"

namespace ecoo {
    using namespace std;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections;
    using namespace System::IO;
   



    public ref class Calculation_bd : public System::Windows::Forms::Form
    {
    public:
        Calculation_bd(void)
        {
            InitializeComponent();
        }


    protected:
        ~Calculation_bd()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::ComboBox^ ModelCombo;
    private: System::Windows::Forms::ComboBox^ CityType;
    private: System::Windows::Forms::ComboBox^ NormType;
    private: System::Windows::Forms::TextBox^ norm_box;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ population;

    private: System::Windows::Forms::Button^ calc_button;
    private: System::Windows::Forms::TextBox^ routeLengthTextBox;
    private: System::Windows::Forms::TextBox^ workFuelTextBox;
    private: System::Windows::Forms::TextBox^ workTimeTextBox;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->ModelCombo = (gcnew System::Windows::Forms::ComboBox());
            this->CityType = (gcnew System::Windows::Forms::ComboBox());
            this->NormType = (gcnew System::Windows::Forms::ComboBox());
            this->norm_box = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->population = (gcnew System::Windows::Forms::TextBox());
            this->calc_button = (gcnew System::Windows::Forms::Button());
            this->routeLengthTextBox = (gcnew System::Windows::Forms::TextBox());
            this->workFuelTextBox = (gcnew System::Windows::Forms::TextBox());
            this->workTimeTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(206, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Выберите модель мусоровоза";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 54);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(164, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Введите число жителей";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 109);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(208, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Введите значение норматива ";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(12, 203);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(235, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Выберите тип населенного пункта";
            // 
            // ModelCombo
            // 
            this->ModelCombo->FormattingEnabled = true;
            this->ModelCombo->Items->AddRange(gcnew cli::array< System::Object^  >(19) {
                L"ЗИЛ-431414(Г)", L"ЗИЛ-431414(Б)", L"ЗИЛ-433360(Б)",
                    L"ЗИЛ-433362(Б)", L"ЗИЛ-433362 МКЗ-10 (Б)", L"ЗИЛ-433362 МКМ-2 (Б)", L"КО-401(Б)", L"КО-413(Б)", L"КО-413(Д)", L"КО-413(Г)",
                    L"КО-424(Б)", L"КО-431(Б)", L"КО-440(Д)", L"КО-440-1(Б)", L"КО-440-1(Г)", L"КО-440-2(Д)", L"КО-440-2(Г)", L"КО-440-3(Г)", L"КО-440-3(Б)"
            });
            this->ModelCombo->Location = System::Drawing::Point(15, 27);
            this->ModelCombo->Name = L"ModelCombo";
            this->ModelCombo->Size = System::Drawing::Size(121, 24);
            this->ModelCombo->TabIndex = 4;
            // 
            // CityType
            // 
            this->CityType->FormattingEnabled = true;
            this->CityType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Большой населенный пункт", L"Небольшой населенный пункт" });
            this->CityType->Location = System::Drawing::Point(15, 222);
            this->CityType->Name = L"CityType";
            this->CityType->Size = System::Drawing::Size(121, 24);
            this->CityType->TabIndex = 5;
            // 
            // NormType
            // 
            this->NormType->FormattingEnabled = true;
            this->NormType->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
                L"Отредактировать норматив накопления твердых коммунальных отходов",
                    L"Подтвердить норму накопления твердых коммунальных отходов (0.16051)"
            });
            this->NormType->Location = System::Drawing::Point(15, 128);
            this->NormType->Name = L"NormType";
            this->NormType->Size = System::Drawing::Size(121, 24);
            this->NormType->TabIndex = 6;
            // 
            // norm_box
            // 
            this->norm_box->Location = System::Drawing::Point(15, 178);
            this->norm_box->Name = L"norm_box";
            this->norm_box->Size = System::Drawing::Size(100, 22);
            this->norm_box->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(12, 159);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(424, 16);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Данные норматива накопления твердых коммунальных отходов";
            // 
            // population
            // 
            this->population->Location = System::Drawing::Point(15, 73);
            this->population->Name = L"population";
            this->population->Size = System::Drawing::Size(100, 22);
            this->population->TabIndex = 9;
            // 
            // calc_button
            // 
            this->calc_button->Location = System::Drawing::Point(403, 444);
            this->calc_button->Name = L"calc_button";
            this->calc_button->Size = System::Drawing::Size(85, 28);
            this->calc_button->TabIndex = 11;
            this->calc_button->Text = L"Расчет";
            this->calc_button->UseVisualStyleBackColor = true;
            this->calc_button->Click += gcnew System::EventHandler(this, &Calculation_bd::calc_button_Click);
            // 
            // routeLengthTextBox
            // 
            this->routeLengthTextBox->Location = System::Drawing::Point(15, 268);
            this->routeLengthTextBox->Name = L"routeLengthTextBox";
            this->routeLengthTextBox->Size = System::Drawing::Size(100, 22);
            this->routeLengthTextBox->TabIndex = 10;
            // 
            // workFuelTextBox
            // 
            this->workFuelTextBox->Location = System::Drawing::Point(15, 312);
            this->workFuelTextBox->Name = L"workFuelTextBox";
            this->workFuelTextBox->Size = System::Drawing::Size(100, 22);
            this->workFuelTextBox->TabIndex = 12;
            // 
            // workTimeTextBox
            // 
            this->workTimeTextBox->Location = System::Drawing::Point(15, 356);
            this->workTimeTextBox->Name = L"workTimeTextBox";
            this->workTimeTextBox->Size = System::Drawing::Size(100, 22);
            this->workTimeTextBox->TabIndex = 14;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(12, 249);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(325, 16);
            this->label10->TabIndex = 23;
            this->label10->Text = L"Введите протяженность маршрута в километрах";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(12, 293);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(224, 16);
            this->label9->TabIndex = 24;
            this->label9->Text = L"Расход топлива во время работы";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(12, 337);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(290, 16);
            this->label6->TabIndex = 25;
            this->label6->Text = L"Введите время прогрева мусоровоза (мин)";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(268, 444);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(82, 28);
            this->button1->TabIndex = 26;
            this->button1->Text = L"Назад";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Calculation_bd::button1_Click);
            // 
            // Calculation_bd
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(806, 516);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->calc_button);
            this->Controls->Add(this->population);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->norm_box);
            this->Controls->Add(this->NormType);
            this->Controls->Add(this->CityType);
            this->Controls->Add(this->ModelCombo);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->routeLengthTextBox);
            this->Controls->Add(this->workFuelTextBox);
            this->Controls->Add(this->workTimeTextBox);
            this->Name = L"Calculation_bd";
            this->Text = L"Calculation_bd";
            this->Load += gcnew System::EventHandler(this, &Calculation_bd::Calculation_bd_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void Calculation_bd_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            String^ selectedModel = ModelCombo->SelectedItem->ToString();
            double capacity, consumption, warmuptime, idleFuel, co2coefficient, fueldensity, fuelenergy;
            int fuelID;
            double routeLength = Convert::ToDouble(routeLengthTextBox->Text);
            double workFuel = Convert::ToDouble(workFuelTextBox->Text);
            double workTime = Convert::ToDouble(workTimeTextBox->Text);
            double population = Convert::ToDouble(this->population->Text);
            double additionalPercentage = 1.2;
            double accumulationNorm = 1.2;


            if (selectedModel == "ЗИЛ-431414(Г)") {
                capacity = 3000;
                consumption = 39.2;
                warmuptime = 12;
                fuelID = 8;
                idleFuel = 6;
                co2coefficient = 2.71;
                fueldensity = 0.424;
                fuelenergy = 27;
            }
            else if (selectedModel == "ЗИЛ-431414(Б)") {
                capacity = 3100;
                consumption = 33.6;
                warmuptime = 13;
                fuelID = 4;
                idleFuel = 5;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "ЗИЛ-433360(Б)") {
                capacity = 3200;
                consumption = 32.3;
                warmuptime = 12;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "ЗИЛ-433362(Б)") {
                capacity = 3111;
                consumption = 32.8;
                warmuptime = 14;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "ЗИЛ-433362 МКЗ-10 (Б)") {
                capacity = 3250;
                consumption = 32.9;
                warmuptime = 11;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "ЗИЛ-433362 МКМ-2 (Б)") {
                capacity = 2900;
                consumption = 33.3;
                warmuptime = 15;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-401(Б)") {
                capacity = 2500;
                consumption = 32.9;
                warmuptime = 11;
                fuelID = 4;
                idleFuel = 4;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-413(Б)") {
                capacity = 2800;
                consumption = 26.2;
                warmuptime = 12;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-413(Д)") {
                capacity = 2800;
                consumption = 15.8;
                warmuptime = 12;
                fuelID = 7;
                idleFuel = 3.8;
                co2coefficient = 3.149;
                fueldensity = 0.86;
                fuelenergy = 43;
            }
            else if (selectedModel == "КО-413(Г)") {
                capacity = 2800;
                consumption = 34.1;
                warmuptime = 13;
                fuelID = 8;
                idleFuel = 6.3;
                co2coefficient = 2.71;
                fueldensity = 0.424;
                fuelenergy = 27;
            }
            else if (selectedModel == "КО-424(Б)") {
                capacity = 2900;
                consumption = 32.1;
                warmuptime = 11;
                fuelID = 4;
                idleFuel = 4.4;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-431(Б)") {
                capacity = 3100;
                consumption = 33.3;
                warmuptime = 14;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-440(Д)") {
                capacity = 2900;
                consumption = 15.8;
                warmuptime = 12;
                fuelID = 7;
                idleFuel = 3.8;
                co2coefficient = 3.149;
                fueldensity = 0.86;
                fuelenergy = 43;
            }
            else if (selectedModel == "КО-440-1(Б)") {
                capacity = 2900;
                consumption = 32.1;
                warmuptime = 11;
                fuelID = 4;
                idleFuel = 4.4;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }
            else if (selectedModel == "КО-440-1(Г)") {
                capacity = 2900;
                consumption = 33.3;
                warmuptime = 12;
                fuelID = 8;
                idleFuel = 6.3;
                co2coefficient = 2.71;
                fueldensity = 0.424;
                fuelenergy = 27;
            }
            else if (selectedModel == "КО-440-2(Д)") {
                capacity = 2900;
                consumption = 15.8;
                warmuptime = 12;
                fuelID = 7;
                idleFuel = 3.8;
                co2coefficient = 3.149;
                fueldensity = 0.86;
                fuelenergy = 43;
            }
            else if (selectedModel == "КО-440-2(Г)") {
                capacity = 2900;
                consumption = 33.3;
                warmuptime = 13;
                fuelID = 8;
                idleFuel = 6.3;
                co2coefficient = 2.71;
                fueldensity = 0.424;
                fuelenergy = 27;
            }
            else if (selectedModel == "КО-440-3(Г)") {
                capacity = 2900;
                consumption = 33.3;
                warmuptime = 13;
                fuelID = 8;
                idleFuel = 6.3;
                co2coefficient = 2.71;
                fueldensity = 0.424;
                fuelenergy = 27;
            }
            else if (selectedModel == "КО-440-3(Б)") {
                capacity = 2900;
                consumption = 33.3;
                warmuptime = 13;
                fuelID = 4;
                idleFuel = 4.8;
                co2coefficient = 3.149;
                fueldensity = 0.75;
                fuelenergy = 33.5;
            }

            float waste = (population * accumulationNorm) + (population * accumulationNorm * additionalPercentage);
            float waste2 = waste * 1000;
            float trips = waste2 / capacity;
            int trips111 = static_cast<int>((trips));
            float TotalWaste = trips * routeLength;

            float Emissions = consumption * fueldensity * co2coefficient * TotalWaste / 100;

            float idleConsumption = idleFuel * (warmuptime / 60) * fueldensity;
            float workConsumption = workFuel * (workTime / 60) * fueldensity;
            float warmUpConsumption = co2coefficient * idleConsumption;
            float workConsumptionTotal = co2coefficient * workConsumption;
            float summa = warmUpConsumption + workConsumptionTotal + Emissions;

           // Формирование строки с результатами
			String^ result = "Количество образованных отходов (тонн): " + waste.ToString() + "\n" +
				"Количество маршрутов: " + trips111.ToString() + "\n" +
				"CO2 пробег (кг): " + Emissions.ToString() + "\n" +
				"Суммарные выбросы: " + summa.ToString();

			// Вывод результата в новом окне
			MessageBox::Show(result, "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       this->Close(); // Закрыть текущее окно
    }
};
}
