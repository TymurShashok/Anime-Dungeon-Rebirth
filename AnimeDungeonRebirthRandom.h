#pragma once

template<typename T>
T random_value(T min, T max) {
	if constexpr (std::is_same_v<T, int>) {
		return rand() % (max - min + 1) + min;
	}
	if constexpr (std::is_same_v<T, double>) {
		return rand() * (max - min + 1) / RAND_MAX + min;
	}

}