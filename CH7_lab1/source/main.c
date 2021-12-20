#include<stdio.h>
#include<stdlib.h>

typedef struct _student
{
	char name[5];
	int chinese, english, math, sum;
	float avg;
}student;

int main()
{
	student data[5];
	FILE *stream1;
	FILE *stream2;

	stream1 = fopen("C://c_code/CH7_lab1/grade.txt", "r");
	stream2 = fopen("C://c_code/CH7_lab1/gradeoutput.txt", "w");

	if (stream1 == NULL || stream2 == NULL)
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	else
	{
		fprintf(stream2, "�m�W\t���\t�^��\t�ƾ�\t�`�M\t����\n");
		for (int i = 0; i < 5; i++)
		{
			fscanf(stream1, "%s", data[i].name);
			fscanf(stream1, "%d", &data[i].chinese);
			fscanf(stream1, "%d", &data[i].english);
			fscanf(stream1, "%d", &data[i].math);

			data[i].sum = data[i].chinese + data[i].english + data[i].math;
			data[i].avg = data[i].sum / 3.0;
			fprintf(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n", data[i].name, data[i].chinese, data[i].english, data[i].math, data[i].sum, data[i].avg);
		}
		fclose(stream1);
		fclose(stream2);
	}
	system("pause");
	return 0;
}