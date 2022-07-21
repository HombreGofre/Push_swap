/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:58:21 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/07/20 20:14:42 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_space(char *argv)

//Se usa en caso de que los numeros vengan dados como un solo argumento entre comillas
void	ft_parse_one_arg(t_var *var, char *argv)
{
	char	**split;
	t_list	new;
	int		i;

	i = 1;
	ft_check_space(argv);
	split = ft_split(argv[i], ' ');
	var->stack_A = NULL;
	i = 0;
	while (spit[i])
	{
		ft_charck_alnum(split[i]);
		i++;
	}
}

//Se usa en caso de que los nuemros vengan dados como mñas de un argumento
void	ft_parse_args(t_var *var, char **argv)
{
}

//comprobará que solamemnte haya nunmeros, espacios y signos en los argumentos
void	ft_check_alnum(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == ' ')
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (!ft_isdigit(argv[i]) || argv[i] != ' ' ||
					argv[i] != '+' || argv[i] != '-')
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (!ft_isdigit(argv[i + 1]) && (agrv[i] == '+' || argv[i] == '-'))
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (ft_strlen(argv) > 11 || )
		i++;
	}
}

//Comprobar que sólo hay un espacio al final y al principio del string
//También que solo hay un espacio entre nuemros
void	ft_check_space(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[1] && argv[i] == ' ' && argv[i + 1] == ' ')
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (argv[0] == ' ' || (!argv[i + 1] && argv[i] ==  ' '))
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
}
