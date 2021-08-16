struct Location2D
{
	int height;
	int width;
		
	Location2D(int _h = 0, int _w = 0){ height = _h, width = _w; }

	bool isNeighbor(Location2D &p){
		return((height == p.height && (width == p.width-1 || width == p.width+1))
		|| (width == p.width && (height == p.height-1 || height == p.height+1)));
	}

	bool operator == (Location2D &p) {return height == p.height && width == p.width;}
};

