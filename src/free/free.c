/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasamad <rasamad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:49:14 by rasamad           #+#    #+#             */
/*   Updated: 2024/06/26 15:49:18 by rasamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/**
 * @brief Frees memory and destroys all mutexes
 * @param simulation_context The context which holds all simulation related
 * 	data.
 */
void	free_memory(t_simulation_state *simulation_context)
{
	t_philosopher	*philosopher;
	t_philosopher	*next_philosopher;

	philosopher = simulation_context->philosphers;
	pthread_mutex_destroy(&simulation_context->shared_mutex);
	while (true)
	{
		next_philosopher = philosopher->next;
		pthread_mutex_destroy(philosopher->left_fork);
		pthread_mutex_destroy(&philosopher->philo_mutex);
		free(philosopher->left_fork);
		free(philosopher);
		philosopher = next_philosopher;
		if (philosopher == simulation_context->philosphers)
			return ;
	}
}
