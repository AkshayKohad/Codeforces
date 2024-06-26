#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct Point {
	ll x, y;
	bool operator < (Point P) const {
		if (x == P.x) return y < P.y;
		else return x < P.x;
	}
	bool operator == (Point P) const {
		return (x == P.x && y == P.y);
	}
};

bool cw(Point a, Point b, Point c) {
	return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) > 0;
}

bool ccw(Point a, Point b, Point c) {
	return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) < 0;
}

bool cll(Point a, Point b, Point c) {
	return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) == 0;
}

vector<Point> convex_hull(vector<Point> points) {
	if (points.size() <= 2) return points;

	sort(points.begin(), points.end());

	vector<Point> up, down;
	Point first = points[0], last = points.back();

	up.push_back(first); down.push_back(first);

	for (int i = 1; i < points.size(); i++) {
		if (i == points.size() - 1 || !ccw(first, points[i], last)) {
			// up set

			while (up.size() >= 2 && ccw(up[up.size() - 2], up[up.size() - 1], points[i])) {
				up.pop_back();
			}

			up.push_back(points[i]);

		}
		if (i == points.size() - 1 || !cw(first, points[i], last)) {
			// down set

			while (down.size() >= 2 && cw(down[down.size() - 2], down[down.size() - 1], points[i])) {
				down.pop_back();
			}

			down.push_back(points[i]);

		}
	}

	points.clear();
	for (int i = 0; i < up.size(); i++) {
		points.push_back(up[i]);
	}
	for (int i = 0; i < down.size(); i++) {
		points.push_back(down[i]);
	}

	sort(points.begin(), points.end());

	points.resize(unique(points.begin(), points.end()) - points.begin());

	return points;
}

int main()
{


	ll n;
	cin >> n;

    vector<Point> points;
	vector<Point> points_A(n);

	for (int i = 0; i < n; i++) {
		cin >> points_A[i].x >> points_A[i].y;
		points.push_back(points_A[i]);
	}

    ll m;
	cin >> m;

    set<Point>s;
	vector<Point> points_B(m);

	for (int i = 0; i < m; i++) {
		cin >> points_B[i].x >> points_B[i].y;
		points.push_back(points_B[i]);
	    s.insert(points_B[i]);	
	}


	vector<Point> convex_hull_vector = convex_hull(points);

    int flag = 1;
    
	for (auto p : convex_hull_vector) {
		
		if(s.find(p)!=s.end())
		{
		    flag=0;
		    break;
		}
	}
	if(flag==1)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}

	return 0;
}
