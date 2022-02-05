#ifndef IBOTS_H_INCLUDED
#define IBOTS_H_INCLUDED




int h = 0, k = 0, l = 0, flag = 0, f = 0, g = 0;
int noteliv1 = 0, noteliv2 = 0, notebath1 = 0, notebath2 = 0, notebath3 = 0, notebed1 = 0, notebed2 = 0;
int picliv = 0;
int chabi = 0;
int noteliv1X = 1280;
int noteliv2X = 1280;
int piclivX = 1280;
int notebath1X = 1280;
int notebath2X = 1280;
int notebedX = 1280;
int Tx = 320;
int p = 0, q = 0, r = 0, t = 0, u = 0, v = 0, w = 0, z = 0;
int b = 0, d = 0, e = 0, m = 0, n = 0, o = 0;
int c = 0, a = 0;
int notesound1 = 0;
int notesound2 = 0;


void savegame()
{
	FILE *fp = fopen("HH.txt", "w");


	fprintf(fp, "%d\n", k);
	fprintf(fp, "%d\n", h);
	fprintf(fp, "%d\n", l);
	fprintf(fp, "%d\n", noteliv1);
	fprintf(fp, "%d\n", noteliv2);
	fprintf(fp, "%d\n", picliv);
	fprintf(fp, "%d\n", notebath1);
	fprintf(fp, "%d\n", notebath2);
	fprintf(fp, "%d\n", notebath3);
	fprintf(fp, "%d\n", notebed1);
	fprintf(fp, "%d\n", notebed2);
	fprintf(fp, "%d\n", chabi);
	fprintf(fp, "%d\n", noteliv1X);
	fprintf(fp, "%d\n", noteliv2X);
	fprintf(fp, "%d\n", piclivX);
	fprintf(fp, "%d\n", notebath1X);
	fprintf(fp, "%d\n", notebath2X);
	fprintf(fp, "%d\n", notebedX);
	fprintf(fp, "%d\n", Tx);
	fprintf(fp, "%d\n", p);
	fprintf(fp, "%d\n", q);
	fprintf(fp, "%d\n", r);
	fprintf(fp, "%d\n", t);
	fprintf(fp, "%d\n", u);
	fprintf(fp, "%d\n", v);
	fprintf(fp, "%d\n", w);
	fprintf(fp, "%d\n", z);
	fprintf(fp, "%d\n", d);
	fprintf(fp, "%d\n", e);
	fprintf(fp, "%d\n", m);
	fprintf(fp, "%d\n", n);
	fprintf(fp, "%d\n", o);
	fprintf(fp, "%d\n", c);
	fprintf(fp, "%d\n", a);
	fprintf(fp, "%d\n", flag);
	fprintf(fp, "%d\n", g);
	fprintf(fp, "%d\n", f);
	fprintf(fp, "%d\n", b);
	fprintf(fp, "%d\n", notesound1);
	fprintf(fp, "%d\n", notesound2);



	fclose(fp);
}



void loadgame()
{
	
	FILE *fp = fopen("HH.txt", "r");
    
	fscanf(fp, "%d", &k);
	fscanf(fp, "%d", &h);
	fscanf(fp, "%d", &l);
	fscanf(fp, "%d", &noteliv1);
	fscanf(fp, "%d", &noteliv2);
	fscanf(fp, "%d", &picliv);
	fscanf(fp, "%d", &notebath1);
	fscanf(fp, "%d", &notebath2);
	fscanf(fp, "%d", &notebath3);
	fscanf(fp, "%d", &notebed1);
	fscanf(fp, "%d", &notebed2);
	fscanf(fp, "%d", &chabi);
	fscanf(fp, "%d", &noteliv1X);
	fscanf(fp, "%d", &noteliv2X);
	fscanf(fp, "%d", &piclivX);
	fscanf(fp, "%d", &notebath1X);
	fscanf(fp, "%d", &notebath2X);
	fscanf(fp, "%d", &notebedX);
	fscanf(fp, "%d", &Tx);
	fscanf(fp, "%d", &p);
	fscanf(fp, "%d", &q);
	fscanf(fp, "%d", &r);
	fscanf(fp, "%d", &t);
	fscanf(fp, "%d", &u);
	fscanf(fp, "%d", &v);
	fscanf(fp, "%d", &w);
	fscanf(fp, "%d", &z);
	fscanf(fp, "%d", &d);
	fscanf(fp, "%d", &e);
	fscanf(fp, "%d", &m);
	fscanf(fp, "%d", &n);
	fscanf(fp, "%d", &o);
	fscanf(fp, "%d", &c);
	fscanf(fp, "%d", &a);
	fscanf(fp, "%d", &flag);
	fscanf(fp, "%d", &g);
	fscanf(fp, "%d", &f);
	fscanf(fp, "%d", &b);
	fscanf(fp, "%d", &notesound1);
	fscanf(fp, "%d", &notesound2);
	

	//printf("%d %d %d %d %d %d %d %d  ", l, flag, g, f, a, noteliv1, noteliv2,noteliv1X);


	fclose(fp);

}

#endif