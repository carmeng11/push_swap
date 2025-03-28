void	assig_index(t_node **stack_a)
{
	t_node	*temp;
	t_node	*current;
	int		index;

	temp = *stack_a;
	while (temp != NULL)
	{
		index = 0;
		current = *stack_a;
		while (current != NULL)
		{
			if (temp->value > current->value)
				index++;
			current = current->next;
		}
		temp->index = index;
		temp = temp->next;
	}
}