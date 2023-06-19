#pragma once
class ArrayUtility2 {
public :
	static int* concat(int s1[], int s2[], int size) {

		int* c_ret = new int[size];
		int s1_loops, s2_loops;
		
		for (s1_loops = 0; s1_loops < (size * 0.5); s1_loops++) {		
		
			c_ret[s1_loops] = s1[s1_loops];		
		
		}

		for (s2_loops = 0; s2_loops < (size * 0.5); s2_loops++) {		
		
			c_ret[s1_loops + s2_loops] = s2[s2_loops];		
		
		}
		return c_ret;
	}

	static int* remove(int s1[], int s2[], int size, int& retSize) {
		
		int* r_ret = new int[size];
		r_ret = ArrayUtility2::concat(s1, s2, size);
		int found_stack = 0;

		for (int index = 0; index < size; index++) {
			for (int f_index = 0; f_index < (size * 0.5); f_index++) {
				if (r_ret[index] == s2[f_index]) {

					r_ret[index] = NULL;
					found_stack++;
					break;
				
				}
			}
		}
		retSize = (size - found_stack);
		return r_ret;
	}
};